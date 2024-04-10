/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:22:11 by rmarcano          #+#    #+#             */
/*   Updated: 2024/04/02 13:22:13 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_stacks(t_list **stack_a, t_list **stack_b)
{
	int	digits;

	digits = ft_lstsize(*stack_a);
	ft_get_index(stack_a);
	if (!ft_is_ordered(stack_a))
	{
		if (digits == 2)
			ft_swap(stack_a, 'a');
		else if (digits == 3)
			ft_sort_three(stack_a);
		else if (digits == 4)
			ft_sort_four(stack_a, stack_b);
		else if (digits == 5)
			ft_sort_five(stack_a, stack_b);
		else
		{
			ft_great_sort(stack_a, stack_b);
		}
	}
}
