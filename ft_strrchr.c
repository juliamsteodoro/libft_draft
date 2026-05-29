/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:32:23 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 19:00:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (s[0] == c)
	{
		return ((char *)&s[0]);
	}
	return (NULL);
}

/*int main(void)
{
	char s[] = "Taylor Swift";

	printf("String: %s\n", s);
	printf("Resultado: %s\n", ft_strrchr(s, 'S'));
	return(0);
}
	*/
