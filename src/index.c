/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:21:23 by rmarcano          #+#    #+#             */
/*   Updated: 2024/04/03 19:21:26 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_get_index(t_list **stack)
{
	t_list	*current;
	t_list	*temp;
	size_t	count_lower;

	current = *stack;
	while (current)
	{
		temp = *stack;
		count_lower = 0;
		while (temp)
		{
			if (*(int *)current->content > *(int *)temp->content)
				count_lower++;
			temp = temp->next;
		}
		current->index = count_lower;
		current = current->next;
	}
}
