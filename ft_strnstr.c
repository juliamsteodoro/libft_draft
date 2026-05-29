/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:04:50 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 19:00:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
	{
		return ((char *)big);
	}
	while (i < n)
	{
		j = 0;
		while (i + j < n && big[(i + j)] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char s1[] = "Taylor Swift is an american singer";
	char s2[] = "american";

	printf("Texto: %s\nPalavra: %s\n", s1, s2);
	printf("Resultado: %s\n", ft_strnstr(s1, s2, 34));
	return(0);
}
	*/