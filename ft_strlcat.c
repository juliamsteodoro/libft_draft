/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:12:17 by marvin            #+#    #+#             */
/*   Updated: 2026/05/16 13:12:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	if (size <= ft_strlen(dst))
	{
		return (size + ft_strlen(src));
	}
	d = ft_strlen(dst);
	s = 0;
	while (src[s] != '\0' && d + 1 < size)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[s]));
}

/*int main(void)
{
	char dest[13] = "Taylor ";
	char src[] = "Swift";

	printf("Antes: %s\n", dest);

	long unsigned int result = ft_strlcat(dest, src, sizeof(dest));

	printf("Depois: %s\n", dest);
	printf("Retorno: %li\n", result);
	return(0);
}
	*/