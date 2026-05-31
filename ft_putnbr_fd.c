/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:16:18 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/30 22:18:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	nbr;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	nbr = (nb % 10) + '0';
	write(fd, &nbr, 1);
}

/*int main(void)
{
	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	ft_putnbr_fd(1989, 1);
	printf("\n");
	return(0);
}
	*/
