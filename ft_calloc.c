/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:40:31 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:58:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = malloc(count * size);
	if (!array)
	{
		return (NULL);
	}
	ft_bzero (array, count * size);
	return (array);
}

/*int main(void)
{
	char	*ptr;

	ptr = ft_calloc(13, sizeof(char));
	printf("Depois: %s\n", ptr);
	return(0);
}
	*/
