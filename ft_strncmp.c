/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:50:57 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 19:34:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
	char s1[] = "Taylor";
	char s2[] = "Taylor Swift";
	printf("String 1: %s\nString 2: %s\n", s1, s2);
	printf("Resultado: %d\n", ft_strncmp(s1, s2, 12));

	char s3[] = "Taylor Swift";
	char s4[] = "Taylor Swift";
	printf("String 1: %s\nString 2: %s\n", s3, s4);
	printf("Resultado: %d\n", ft_strncmp(s3, s4, 12));
	return(0);
}
	*/