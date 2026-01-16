/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:19:40 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/16 17:18:13 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, int len)
{
    char        *d;
    const char  *s;
    int         i;

    if (!dst && !src)
        return (0);

    d = dst;
    s = src;

    if (d > s)
    {
        i = len - 1;
        while (i >= 0)
        {
            d[i] = s[i];
            i--;
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