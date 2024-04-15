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

int	count_rot(t_list *stack, int max_indx)
{
	int	counter;

	counter = 0;
	while (stack && stack->index != max_indx)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

void	ft_bucket_sort(t_list **stack_a, t_list **stack_b, int digits)
{
	int	i;
	int	bucket_range;

	i = 0;
	bucket_range = ft_sqrt(digits) * 7 / 5;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			ft_push(stack_a, stack_b, 'b');
			if (ft_lstsize(*stack_b) > 1)
				ft_rotate(stack_b, 'b');
			i++;
		}
		else if ((*stack_a)->index <= i + bucket_range)
		{
			ft_push(stack_a, stack_b, 'b');
			i++;
		}
		else
			ft_rotate(stack_a, 'a');
	}
}

void	ft_great_sort(t_list **stack_a, t_list **stack_b, int digits)
{
	int	rotate_b_count;
	int	rev_rot_b_count;

	ft_bucket_sort(stack_a, stack_b, digits);
	while (digits - 1 >= 0)
	{
		rotate_b_count = count_rot((*stack_b), (digits - 1));
		rev_rot_b_count = digits - rotate_b_count;
		if (rotate_b_count <= rev_rot_b_count)
		{
			while ((*stack_b)->index != digits - 1)
				ft_rotate(stack_b, 'b');
			ft_push(stack_b, stack_a, 'a');
			digits--;
		}
		else
		{
			while ((*stack_b)->index != digits - 1)
				ft_rev_rotate(stack_b, 'b');
			ft_push(stack_b, stack_a, 'a');
			digits--;
		}
	}
}
