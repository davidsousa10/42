/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:11:09 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/30 20:29:32 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, int n)
{
    const unsigned char *ptr;
    int                 i;

    ptr = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)&ptr[i]);
        i++;
    }
    return (0);

}
