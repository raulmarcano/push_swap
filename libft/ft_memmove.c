/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:51:39 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/17 18:50:36 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destiny;
	const unsigned char	*source;
	size_t				i;

	destiny = dst;
	source = src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (destiny < source)
	{
		while (len--)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	else
	{
		while (len--)
			destiny[len] = source[len];
	}
	return (dst);
}
/*
int main()
{
  char str1[] = "Buenas tardes";
  char str2[20];
  size_t len = 4;
  ft_memmove(str2, str1, len);
  return (0);
}*/
