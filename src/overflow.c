/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overflow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:09:04 by rmarcano          #+#    #+#             */
/*   Updated: 2024/03/27 12:09:06 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_compare_to_overflow(char *splited, int *num)
{
	char	*str;

	splited = zero_handling(splited);
	ft_printf("before itoa: %s\n", splited);
	str = ft_itoa(*num);
	ft_printf("%s\n", str);
	if (ft_strncmp(splited, str, ft_strlen(splited)))
	{
		free(str);
		ft_error(4);
	}
	free(str);
}

char	*remove_zeros(char *cadena)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	num = 0;
	while (cadena[i] != '\0')
	{
		if ((cadena[i] == '+' || cadena[i] == '0') && !num)
		{
			i++;
			continue ;
		}
		if (cadena[i] >= '1' && cadena[i] <= '9')
			num = 1;
		cadena[j++] = cadena[i++];
	}
	if (!num)
		cadena[j++] = '0';
	cadena[j] = '\0';
	return (cadena);
}

char	*handle_negative(char *cadena)
{
	int	i;
	int	j;
	int	k;
	int	cap;

	i = 0;
	j = 0;
	cap = 0;
	if (cadena[i] == '-')
	{
		cap = 1;
		i++;
	}
	if (cap == 1 && cadena[0] != '-')
	{
		k = j;
		while (k >= 0)
		{
			cadena[k + 1] = cadena[k];
			k--;
		}
		cadena[0] = '-';
	}
	return (cadena);
}

char	*zero_handling(char *cadena)
{
	int	i;

	i = 0;
	// if (cadena[i] == '\n') 
	// 	return (&cadena[i + 1]);
	if (cadena[i] == '-')
		i++;
	while (cadena[i] != '\0')
	{
		if (cadena[i] == '0')
			i++;
		else
			break ;
	}
	if (cadena[i] == '\0')
	{
		cadena = "0";
		return (cadena);
	}
	remove_zeros(cadena);
	handle_negative(cadena);
	return (cadena);
}
