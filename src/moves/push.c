/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:27:59 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/28 11:28:01 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    ft_push(t_list **stack_from, t_list **stack_dst, char st_dst)
{
    t_list *aux;

    aux = *stack_from;
    *stack_from = (*stack_from)->next;
    aux->next = *stack_dst;
    *stack_dst = aux;
    ft_printf("%s%c\n", "p", st_dst);
}