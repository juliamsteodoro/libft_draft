/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:31:54 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/30 21:44:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('\n'));
	return (0);
}
	*/
