/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:11:09 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:11:13 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, int n)
{
    int             i;
    unsigned char   *p;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
            return ((void *)&p[i]);
        i++;
    }
    return (0);
}