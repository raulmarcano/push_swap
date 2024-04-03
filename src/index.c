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

void	ft_zero_index(t_list **stack_a)
{
	while(*stack_a)
	{
		(*stack_a)->index = 0;
		*stack_a = (*stack_a)->next;
	}
}

void	ft_get_index(t_list **stack_a)
{
	size_t size;
	t_list *max_temp;
	int		max_value;

	max_value = 0;
    size = ft_lstsize(*stack_a);
    max_temp = *stack_a;


}

	//recorrer la lista para buscar el numero mayor y asignarle el size
	//size = size -1
	//hacer una variable temporal del maximo y recorrer la lista mientras index = 0 
	//como el mayor anterior ya tiene index, no entrará en el while
