/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:41:15 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/30 21:36:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("   +123"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1989"));
	printf("%d\n", ft_atoi("   ts1989"));
	printf("%d\n", ft_atoi("ts13"));
	return (0);
}
*/