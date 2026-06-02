/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreir <jumoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:40:31 by jumoreir          #+#    #+#             */
/*   Updated: 2026/06/02 12:45:53 by jumoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	array = malloc(count * size);
	if (!array)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);
}
