/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:25:43 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 19:00:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static char	to_upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*int main(void)
{
	char str[] = "the tortured poets department.";
	char *newstr;

	printf("Antes: %s\n", str);
	newstr = ft_strmapi(str, to_upper);
	printf("Depois: %s\n", newstr);
	return(0);
}
	*/