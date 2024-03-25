/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:25:08 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/25 17:25:11 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_free_splited(char **splited)
{
    int j = 0;
    while (splited[j])
        free(splited[j++]);
    free(splited);
	ft_error(1);
}

void ft_add_to_stack(char *str, t_list **stack_a)
{
    char **splited;
    int j = 0;
    int *num;
    t_list *node;

	splited = ft_split(str, ' ');
    while (splited[j])
	{
        num = malloc(sizeof(int));
        if (!num)
            ft_free_splited(splited);
        *num = ft_atoi(splited[j]);
        node = ft_lstnew(num);
        if (!node)
		{
            ft_free_splited(splited);
            free(num);
        }
        ft_lstadd_back(stack_a, node);
        free(splited[j++]);
    }
    free(splited);
}

t_list *ft_create_stack(char **argv, int count, t_list **stack_a)
{
    int i = 1;
    while (i < count)
        ft_add_to_stack(argv[i++], stack_a);
    return (*stack_a);
}

