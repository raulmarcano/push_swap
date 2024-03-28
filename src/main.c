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

void	ft_putnbr_copy(void *integer)
{
	char	digit;
    int n;
    int tmp;

    n = *(int *)integer;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
    {
        tmp = n / 10;
		ft_putnbr_copy(&tmp);
    }
	digit = '0' + (n % 10);
	write(1, &digit, 1);
	write(1, "\n", 1);
	return ;
}

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
	ft_lstiter(stack_a, ft_putnbr_copy);
	ft_push(&stack_a, &stack_b, 'b');
	ft_printf("Stack a:\n");
	ft_lstiter(stack_a, ft_putnbr_copy);
	ft_printf("Stack b:\n");
	ft_lstiter(stack_b, ft_putnbr_copy);
	ft_push(&stack_b, &stack_a, 'a');
	ft_printf("Stack a:\n");
	ft_lstiter(stack_a, ft_putnbr_copy);
	ft_printf("Stack b:\n");
	ft_lstiter(stack_b, ft_putnbr_copy);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	//system("leaks -q push_swap");
	return (0);
}