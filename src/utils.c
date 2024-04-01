/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:48:44 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/18 19:48:54 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(int error)
{
	if (error == -1)
		ft_printf("ERROR\n");
	if (error == 1)
		ft_printf("ERROR\nDatos erroneos o no numéricos\n");
	if (error == 2)
		ft_printf("ERROR\nNo hay datos\n");
	if (error == 3)
		ft_printf("ERROR\nDatos duplicados\n");
	if (error == 4)
		ft_printf("ERROR\nOverflow\n");
	if (error == 5)
		ft_printf("ERROR\nEsta ordenado\n");
	exit(1);
}

void	ft_is_ordered(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current && current->next)
	{
		if (*((int *)current->content) > *((int *)current->next->content))
			return ;
		current = current->next;
	}
	ft_error(5);
}

void	ft_sort_three(t_list **stack)
{
	t_list	*first;

	first = *stack;
	if (((*((int *)first->content)) > (*((int *)first->next->content)))
		&& ((*((int *)first->content)) > *((int *)first->next->next->content)))
		ft_rotate(stack, 'a');
	else if (((*((int *)first->content)) < (*((int *)first->next->content)))
		&& ((*((int *)first->content)) < *((int *)first->next->next->content)))
		ft_rev_rotate(stack, 'a');
	first = *stack;
	if (*((int *)first->content) > *((int *)first->next->content))
		ft_swap(stack, 'a');
}
