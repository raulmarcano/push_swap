/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:28:30 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/28 11:28:31 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

#include "../../include/push_swap.h"

void	ft_swap(t_list **stack, char st)
{
	t_list	*first;
	t_list	*second;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		first = *stack;
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		*stack = second;
		if (st != 'o')
			ft_printf("%s%c\n", "s", st);
	}
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a, 'o');
	ft_swap(stack_b, 's');
}
