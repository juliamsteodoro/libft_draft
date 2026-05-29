/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:59:30 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:59:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	len = 0;
	words = ft_wordcount(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = ft_wordlen(&s[i], c);
			split[j] = ft_substr(s, i, len);
			j++;
			i = i + len;
		}
	}
	split[j] = NULL;
	return (split);
}

/*int main(void)
{
	char **result;
	int		i;
	
	result = ft_split("42École Libft 1989", ' ');
	
	i = 0;
	while(result[i])
	{
		printf("Split[%d]: %s\n", i, result[i]);
		i++;
	}
	return(0);
}
	*/