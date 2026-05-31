/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 14:13:13 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/31 11:55:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i - 1]))
		i--;
	return (ft_substr(s1, 0, i));
}

/*int main(void)
{
	char s1[] = "Taylor Swift is an american singer";
	char *word = "is an american singer";
	
	printf("Texto: %s\nPalavra: %s\n", s1, word);
	printf("Resultado: %s\n", ft_strtrim(s1, word));
	return(0);
}
	*/