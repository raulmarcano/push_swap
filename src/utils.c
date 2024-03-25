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
	if (error == 1)
		printf("ERROR: Datos erroneos o no numéricos\n");
	if (error == 2)
		printf("ERROR: No hay datos\n");
	if (error == 3)
		printf("ERROR: Datos duplicados\n");
	if (error == 4)
		printf("ERROR: Overflow\n");
	system("leaks -q push_swap");
	exit(1);
}
