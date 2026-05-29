/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:24:57 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:59:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static void	to_upper(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

/*int main(void)
{
	char string[] = "the tortured poets department";

	printf("Antes: %s\n", string);

	ft_striteri(string, to_upper);

	printf("Depois: %s\n", string);
	return(0);
}
*/