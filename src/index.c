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

void ft_zero_index(t_list **stack_a)
{
    while(*stack_a && (*stack_a)->next)
    {
        (*stack_a)->index = 0;
        *stack_a = (*stack_a)->next;
    }
    // Handle the last node separately
    if (*stack_a)
    {
        (*stack_a)->index = 0;
    }
}




// void ft_get_index(t_list **stack)
// {

// }



	//recorrer la lista para buscar el numero mayor y asignarle el size
	//size = size -1
	//hacer una variable temporal del maximo y recorrer la lista mientras index = 0 
	//como el mayor anterior ya tiene index, no entrará en el while
