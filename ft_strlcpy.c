/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:51:56 by marvin            #+#    #+#             */
/*   Updated: 2026/05/16 14:51:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy ( char *dst , const char *src , size_t size )
{
    size_t s;
    size_t i;

    if(!dst || !src)
    {
        return(0);
    }
    s = ft_strlen(src);
    i = 0;
    if(size != 0)
    {
        while(src[i] != '\0' && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(s);
}

