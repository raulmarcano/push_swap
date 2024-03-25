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

void	ft_check_numbers(int argc, char **argv);
int		ft_many_numbers(char **array);
void	ft_error(int error);
void 	ft_add_to_stack(char *str, t_list **stack_a);
void 	ft_free_splited(char **splited, int j);
t_list 	*ft_create_stack(char **argv, int count, t_list **stack_a);


#endif
