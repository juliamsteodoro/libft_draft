/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:59:30 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/31 11:10:08 by marvin           ###   ########.fr       */
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

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	ft_fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

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
			if (!split[j])
				return (0);
			j++;
			i += len;
		}
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_wordcount(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	if (!ft_fill_split(split, s, c))
		return (NULL);
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