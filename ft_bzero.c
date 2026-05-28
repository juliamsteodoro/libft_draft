/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreir <jumoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:29:01 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/28 16:36:22 by jumoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*int	main(void)
{
	char	str[] = "Hello World!";

	printf("Antes: %s\n", str);
	ft_bzero(str, 5);
	printf("Depois: %s\n", str);
	printf("\n");
	return (0);
}
	*/