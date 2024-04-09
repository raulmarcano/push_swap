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

void	ft_sort_three(t_list **stack)
{
	t_list	*first;
	int		a;
	int		b;
	int		c;

	first = *stack;
	a = *((int *)first->content);
	b = *((int *)first->next->content);
	c = *((int *)first->next->next->content);
	if ((a > b) && (b < c) && (c < a))
		ft_rotate(stack, 'a');
	else if ((a > b) && (b > c) && (c < a))
	{
		ft_swap(stack, 'a');
		ft_rev_rotate(stack, 'a');
	}
	else if ((a < b) && (b > c) && (c < a))
		ft_rev_rotate(stack, 'a');
	else if ((a > b) && (b < c) && (c > a))
		ft_swap(stack, 'a');
	else if ((a < b) && (b > c) && (c > a))
	{
		ft_swap(stack, 'a');
		ft_rotate(stack, 'a');
	}
}

void	ft_five_aux(t_list **stack_a, t_list **stack_b, int index)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *stack_a;
	while (temp)
	{
		if (temp->index == index)
		{
			if (i == 2)
				ft_rotate(stack_a, 'a');
			if (i == 1 || i == 2)
				ft_swap(stack_a, 'a');
			if (i == 3)
				ft_rev_rotate(stack_a, 'a');
			if ((i == 4 || i == 3) && index == 0)
				ft_rev_rotate(stack_a, 'a');
			ft_push(stack_a, stack_b, 'b');
			break ;
		}
		i++;
		temp = temp->next;
	}
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	index;

	index = 0;
	while (index <= 1)
	{
		ft_five_aux(stack_a, stack_b, index);
		index++;
	}
	ft_sort_three(stack_a);
	ft_push(stack_b, stack_a, 'a');
	ft_push(stack_b, stack_a, 'a');
}

void	ft_sort_stacks(t_list **stack_a, t_list **stack_b)
{
	int	digits;

	digits = ft_lstsize(*stack_a);
	if (!ft_is_ordered(stack_a))
	{
		if (digits == 2)
			ft_swap(stack_a, 'a');
		else if (digits == 3)
			ft_sort_three(stack_a);
		else if (digits == 5)
			ft_sort_five(stack_a, stack_b);
		else
		{
			ft_get_index(stack_a);
		}
	}
}
