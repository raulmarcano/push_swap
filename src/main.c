/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:19:18 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/27 19:19:21 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	ft_check_numbers(argc, argv);
	if (argc >= 2)
		stack_a = ft_create_stack(argv, argc, &stack_a);
	else
		return (0);
	ft_sort_stacks(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	return (0);
}
