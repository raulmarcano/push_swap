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
/* ****************************************************** ******************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    char **array;

    if (argc < 2)
        ft_error(2);
	ft_check_numbers(argc, argv);
    if (argc == 2)
        array = ft_split(argv[1], ' ');
      else
        array = &argv[1];
        



    printf("%s\n", array[0]);
    printf("%s\n", array[1]);
    printf("%s\n", array[2]);
    printf("%s\n", array[3]);
    printf("%d\n", ft_many_numbers(array));


    
    // for (int i = 0; numbers[i] != NULL; i++)
    // {
    //     free(numbers[i]);
    // }
    // free(numbers);
    system("leaks -q push_swap");
    return 0;
}

