/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:54:38 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/30 19:08:03 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, int len)
{
    int i;
    unsigned char *p;

    p = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (b);
}
