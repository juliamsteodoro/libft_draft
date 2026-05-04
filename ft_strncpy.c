/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:31:24 by marvin            #+#    #+#             */
/*   Updated: 2026/05/04 10:31:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_strncpy(char *restrict s1, const char *restrict s2, size_t n)
{
    size_t i;

    i = 0;
    while(s2[i] != '\0' && i < n)
    {
        s1[i] = s2[i];
        i++;
    }

    while(i < n)
    {
        s1[i] = '\0';
        i++;
    }
    return(s1);
}