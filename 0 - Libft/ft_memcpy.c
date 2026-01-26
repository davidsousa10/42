/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:08:48 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:31:08 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, int len)
{
    char *d;
    const char *s;
    int i;

    d = dst;
    s = src;
    i = 0;

    while (i < len)
   {
    d[i] = s[i];
    i++;
   }
   return (dst);  
}