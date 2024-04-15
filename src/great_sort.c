/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   great_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:04:27 by rmarcano          #+#    #+#             */
/*   Updated: 2024/04/10 13:04:29 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push_remain(t_list **st_a, t_list **st_b, int size, int total_size)
{
	while (size > 3)
	{
		if ((*st_a)->index == total_size
			|| (*st_a)->index == total_size - 1
			|| (*st_a)->index == total_size - 2)
			ft_rotate(st_a, 'a');
		else
		{
			ft_push(st_a, st_b, 'b');
			size--;
		}
	}
}

void	ft_push_all(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	total_size;
	int	half;

	total_size = ft_lstsize(*stack_a);
	size = total_size;
	if (size % 2 == 0)
		half = size / 2;
	else
		half = (size / 2) + 1;
	while (size >= 3 && size > half)
	{
		if (((*stack_a)->index) < half)
		{
			ft_push(stack_a, stack_b, 'b');
			size--;
		}
		else
			ft_rotate(stack_a, 'a');
	}
	ft_push_remain(stack_a, stack_b, size, total_size);
	ft_sort_three(stack_a);
}

void	ft_great_sort(t_list **stack_a, t_list **stack_b)
{
	ft_push_all(stack_a, stack_b);
}