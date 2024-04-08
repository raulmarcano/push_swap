/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:39:36 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/21 13:39:38 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_check_numbers(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argv[1][0] == '\0')
		ft_print_error();
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
			&& ft_isdigit(argv[i][j + 1]))
				j++;
			else if ((ft_isspace(argv[i][j]) || ft_isdigit(argv[i][j])
			|| ((argv[i][j] == '-' || argv[i][j] == '+')
			&& ft_isdigit(argv[i][j + 1]) && ft_isspace(argv[i][j - 1]))))
				j++;
			else
				ft_print_error();
		}
		i++;
	}
}

void	ft_check_duplicates(t_list *stack_a)
{
	t_list	*current;
	t_list	*compare;
	int		current_value;
	int		compare_value;

	current = stack_a;
	while (current != NULL && current->next != NULL)
	{
		compare = current->next;
		current_value = *((int *)current->content);
		while (compare != NULL)
		{
			compare_value = *((int *)compare->content);
			if (current_value == compare_value)
			{
				ft_lstclear(&stack_a, free);
				ft_print_error();
			}
			compare = compare->next;
		}
		current = current->next;
	}
}
