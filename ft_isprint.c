/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:44:09 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:58:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('7'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('\t'));
	printf("%d\n", ft_isprint('\n'));
	return (0);
}
	*/
