/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:39:36 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/21 13:39:38 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_check_numbers(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
			&& ft_isdigit(argv[i][j + 1]))
				j++;
			else if ((ft_isspace(argv[i][j]) || ft_isdigit(argv[i][j])
			|| ((argv[i][j] == '-' || argv[i][j] == '+')
			&& ft_isdigit(argv[i][j + 1]) && ft_isspace(argv[i][j - 1]))))
				j++;
			else
				ft_error(1);
		}
		i++;
	}
}

