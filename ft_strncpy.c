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

char *ft_strncpy(char *src, const char *dest, size_t n)
{
    size_t i;

    i = 0;
    while(src[i] != '\0' && i < n)
    {
        src[i] = dest[i];
        i++;
    }

    while(i < n)
    {
        src[i] = '\0';
        i++;
    }
    return(src);
}