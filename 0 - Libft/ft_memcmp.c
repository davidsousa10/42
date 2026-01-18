/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:22:58 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/19 00:55:19 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, int n)
{
    int i;
    const unsigned char *p1;
    const unsigned char *p2;

    i = 0;
    p1 = s1;
    p2 = s2;
    while q(i < n)
    {
        if(p1[i] != p2[i])
            return(p1[i] - p2[i]);
        i++;
    }
    return(0);
}