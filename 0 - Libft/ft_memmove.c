/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:19:40 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/30 20:13:53 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, int n)
{
    unsigned char       *d;
    const unsigned char *s;
    int                 i;

    if (!dst && !src)
        return (0);

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    if (d > s)
    {
        i = n - 1;
        while (i >= 0)
        {
            d[i] = s[i];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dst);
}
