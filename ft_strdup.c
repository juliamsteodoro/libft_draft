/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:09:16 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/31 11:03:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, len + 1);
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
