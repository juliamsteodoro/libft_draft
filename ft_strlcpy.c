/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:51:56 by marvin            #+#    #+#             */
/*   Updated: 2026/05/16 14:51:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*int main(void)
{
	char dst[] = "Taylor ";
	char src[] = "Alison Swift, an american singer.";
	long unsigned int result;

	printf("Antes: %s\n", dst);
	result = ft_strlcat(dst, src, 20);
	printf("Depois: %s\n", dst);
	printf("Retorno: %li\n", result);
	return(0);
}
	*/