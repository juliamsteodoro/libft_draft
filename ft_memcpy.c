/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:55:28 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:59:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	i = 0;
	dst_ptr = (unsigned char *) dst;
	src_ptr = (unsigned char *) src;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
	char src[] = "the life of a showgirl";
	char dst[25] ;

	printf("Antes: %s\n", dst);
	ft_memcpy(dst, src, 22);
	printf("Depois: %s\n", dst);
	return(0);
}
	*/