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

#include "include/push_swap.h"

int main(int argc, char **argv)
{
    if (argc < 2)
        ft_error(2);
	check_only_numbers(argc, argv);



    // printf("%s\n", numbers[0]);
    // printf("%s\n", numbers[1]);
    // printf("%s\n", numbers[2]);
    // printf("%s\n", numbers[3]);

    
    // for (int i = 0; numbers[i] != NULL; i++)
    // {
    //     free(numbers[i]);
    // }
    // free(numbers);

    return 0;
}

