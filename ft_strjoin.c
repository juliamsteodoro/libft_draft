/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:58:20 by jumoreir          #+#    #+#             */
/*   Updated: 2026/05/29 18:59:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(s3, s1, len + 1);
	ft_strlcat(s3, s2, len + 1);
	return (s3);
}

/*int main(void)
{
	char s1[] = "Taylor ";
	char s2[] = "Swift";

	printf("Antes: %s, %s\n", s1, s2);
	printf("Depois: %s\n", ft_strjoin(s1,s2));
	return(0);
}
*/