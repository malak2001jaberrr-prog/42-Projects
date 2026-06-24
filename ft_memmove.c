/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majaber <majaber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 14:24:27 by majaber           #+#    #+#             */
/*   Updated: 2026/06/24 15:27:08 by majaber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (d > s)
    {
        i = len;
        while (i > 0)
         {
             i--;
             d[i] = s[i];
        }
    }
    else
    {
        i = 0;
        while (i < len)
    {
        d[i] = s[i];
        i++;
    }  
}
    return (dst);
}