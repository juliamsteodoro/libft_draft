/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:52:48 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/30 22:02:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s1[] = "Taylor";
	char s2[] = "TaylorSwift";

	printf("%d\n", ft_memcmp(s1, s2, 12));
	
	char s3[] = "TaylorSwift";
	char s4[] = "TaylorSwift";

	printf("%d\n", ft_memcmp(s3, s4, 12));
	
	char s5[] = "TaylorSwift";
	char s6[] = "Taylor";

	printf("%d\n", ft_memcmp(s5, s6, 12));
	return(0);
}
*/
