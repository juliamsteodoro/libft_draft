/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:11:20 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 19:33:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
	return ;
}
/*int main(void)
{
	ft_putendl_fd("42 São Paulo", 1);
	ft_putendl_fd("Taylor Swift", 1);
	ft_putendl_fd("The Tortured Poets Department", 1);
	return(0);
}
	*/
