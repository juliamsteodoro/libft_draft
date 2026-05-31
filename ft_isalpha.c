/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:26:18 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/31 11:41:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isalnum('T'));
	printf("%d\n", ft_isalnum('s'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", ft_isalnum(' '));
	return (0);
}
	*/
