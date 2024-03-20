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

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
	{
		return (1);
	}
	return (0);
}
void ft_error(int error)
{
    if(error == 1)
		printf("ERROR: Datos no numéricos\n");
	if(error == 2)
		printf("ERROR: No hay datos\n");
	if (error == 3)
		printf("ERROR: Datos duplicados\n");
    exit(1);
}

void check_only_numbers(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]))
				j++;
			else if(ft_isspace(argv[i][j]))
				j++;
			else
				ft_error(1);
		}
	i++;
	}
}
