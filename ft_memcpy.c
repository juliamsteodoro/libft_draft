/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreir <jumoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:55:28 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/19 10:24:19 by jumoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *dst_ptr;
	unsigned char *src_ptr;

	i = 0;
	dst_ptr = (unsigned char *) dst;
	src_ptr = (unsigned char *) src;

	while(i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return(dst);
}