/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:28:11 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/28 11:28:13 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rotate(t_list **stack, char st)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		first = *stack;
		second = (*stack)->next;
		last = ft_lstlast(*stack);
		last->next = first;
		first->next = NULL;
		*stack = second;
		if (st != 'o')
			ft_printf("%s%c\n", "r", st);
	}
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a, 'o');
	ft_rotate(stack_b, 'r');
}

void	ft_rev_rotate(t_list **stack, char st)
{
	t_list	*first;
	t_list	*aux;
	t_list	*second_last;
	t_list	*last;

	first = *stack;
	last = ft_lstlast(*stack);
	aux = *stack;
	while (aux->next->next)
		aux = aux->next;
	last->next = first;
	second_last = aux;
	second_last->next = NULL;
	*stack = last;
	if (st != 'o')
		ft_printf("%s%c\n", "rr", st);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rotate(stack_a, 'o');
	ft_rev_rotate(stack_b, 'r');
}
