/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:28:20 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/31 10:52:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_isalnum('T'));
	printf("%d\n", ft_isalnum('s'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", ft_isalnum(' '));
	return (0);
}
*/