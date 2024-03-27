/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:13:48 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/27 16:13:51 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	ft_check_numbers(argc, argv);
	if (argc >= 2)
		stack_a = ft_create_stack(argv, argc, &stack_a);
	else
		return (0);
	ft_check_duplicates(stack_a);
	ft_lstclear(&stack_a, free);
	system("leaks -q push_swap");
	return (0);
}
