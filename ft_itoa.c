/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreir <jumoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:04:41 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/28 16:11:01 by jumoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = n * -1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	digits;
	char		*number;
	size_t		i;
	long int	nb;

	nb = n;
	if (nb < 0)
		nb = nb * -1;
	i = 0;
	digits = len(n);
	if (n < 0)
		digits = digits + 1;
	number = malloc(sizeof(char) * (digits + 1));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		number[i] = '-';
		i++;
	}
	number[digits] = '\0';
	while (digits > i)
	{
		digits--;
		number[digits] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (number);
}
