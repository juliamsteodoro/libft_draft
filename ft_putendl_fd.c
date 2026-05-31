/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:11:20 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/31 11:15:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int main(void)
{
	ft_putendl_fd("42 São Paulo", 1);
	ft_putendl_fd("Taylor Swift", 1);
	ft_putendl_fd("The Tortured Poets Department", 1);
	return(0);
}
	*/
