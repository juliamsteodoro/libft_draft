/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:09:16 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 19:33:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*copy;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int main(void)
{
	char *original;
	char *dup;

	original = "Taylor Swift";
	dup = ft_strdup(original);

	printf("Original: %s\n", original);
	printf("Cópia: %s\n", dup);
	return(0);
}
	*/
