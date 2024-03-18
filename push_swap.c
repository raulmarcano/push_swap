/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:50:55 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/18 11:50:57 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_numbers(int argc, char **argv)
{
	int count;
	int *numbers;
	int i;

	count = argc - 1;
	numbers = malloc(count * sizeof(int));
	if (numbers == NULL) 
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	i = 1;
	while (i <= count)
	{
		numbers[i] = ft_atoi(argv[i]);
		i++;
	}
	return(numbers);
}

int	ft_error()
{
	printf("ERROR: Must have a least 2 values to arrange\n");
	exit(1);
}

int main (int argc, char **argv)
{
	int *numbers;
	if (argc < 2)
		ft_error();
	if (argc == 2)
	{
		ft_split();
	}
	numbers = get_numbers(argc, argv);
	printf("%d", numbers[1]);
	return(0);
}
