/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:55:29 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/21 18:55:40 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

	//INPUT CHECKERS

void	ft_check_numbers(int argc, char **argv);
int		ft_many_numbers(char **array);
void	ft_error(int error);
void	ft_add_to_stack(char *str, t_list **stack_a);
void	ft_free_splited(char **splited, int j);
t_list	*ft_create_stack(char **argv, int count, t_list **stack_a);
void	ft_check_duplicates(t_list *head);
void	ft_compare_to_overflow(char *splitted, int *num);
char	*ft_zero_handling(char *cadena);

	//MOVES

void	ft_swap(t_list **stack, char st);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stack, char st);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rev_rotate(t_list **stack, char st);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void    ft_push(t_list **stack_from, t_list **stack_dst, char st_dst);

#endif
