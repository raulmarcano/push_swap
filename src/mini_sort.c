/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:47:20 by rmarcano          #+#    #+#             */
/*   Updated: 2024/04/09 18:47:23 by rmarcano         ###   ########.fr       */
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

void	ft_mini_sort_aux(t_list **stack_a, t_list **stack_b, int index, int cap)
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
			if ((i == 4 || i == 3) && index == 0 && cap != 4)
				ft_rev_rotate(stack_a, 'a');
			ft_push(stack_a, stack_b, 'b');
			break ;
		}
		i++;
		temp = temp->next;
	}
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	ft_mini_sort_aux(stack_a, stack_b, 0, 4);
	ft_sort_three(stack_a);
	ft_push(stack_b, stack_a, 'a');
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	index;

	index = 0;
	while (index <= 1)
	{
		ft_mini_sort_aux(stack_a, stack_b, index, 5);
		index++;
	}
	ft_sort_three(stack_a);
	ft_push(stack_b, stack_a, 'a');
	ft_push(stack_b, stack_a, 'a');
}
