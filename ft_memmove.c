/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:33:37 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:59:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	size_t			i;

	ptr_d = (unsigned char *)dst;
	ptr_s = (unsigned char *)src;
	i = 0;
	if (ptr_d > ptr_s)
	{
		while (n > 0)
		{
			n--;
			ptr_d[n] = ptr_s[n];
		}
	}
	else
	{
		while (i < n)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	return (dst);
}

/*int main(void)
{
	char str1[] = "abcdefghijklmnopqrstuv";
	char str2[] = "the tortured poets department";


	printf("Antes:\n");
	printf("destino: %s\n", str1);
	printf("fonte: %s\n", str2);

	ft_memmove(str1,str2, 29);

	printf("Depois:\n");
	printf("destino: %s\n", str1);
	printf("fonte: %s\n", str2);
	return(0);
}
	*/