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

void	ft_free_splited(char **splited, int j)
{
	while (j >= 0)
		free(splited[j--]);
	free(splited);
	ft_error(1);
}

void	ft_add_to_stack(char *str, t_list **stack_a)
{
	char	**splited;
	int		j;
	int		*num;
	t_list	*node;

	j = 0;
	splited = ft_split(str, ' ');
	while (splited[j])
	{
		num = malloc(sizeof(int));
		if (!num)
			ft_free_splited(&splited[j], j);
		*num = ft_atoi(splited[j]);
		node = ft_lstnew(num);
		if (!node)
		{
			ft_free_splited(splited, j);
			free(num);
		}
		ft_lstadd_back(stack_a, node);
		free(splited[j++]);
	}
	free(splited);
}

t_list	*ft_create_stack(char **argv, int count, t_list **stack_a)
{
	int	i;

	i = 1;
	while (i < count)
		ft_add_to_stack(argv[i++], stack_a);
	return (*stack_a);
}
