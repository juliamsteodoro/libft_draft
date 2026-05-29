/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:26:18 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:58:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
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
