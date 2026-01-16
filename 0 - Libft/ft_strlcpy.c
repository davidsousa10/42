/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:45:03 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/16 17:18:13 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, int size)
{
    int i;
    int l;

    i = 0;
    l = 0;
    while(src[l] != '\0')
        l++;
    if (size <= 0)
        return(l);
    while(src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (l);
}