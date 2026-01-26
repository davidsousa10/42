/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:48:47 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/26 19:46:38 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dst, const char *src, int dstsize)
{
    int dlen;
    int slen;
    int i;
    int j;

    dlen = 0;
    while (dst[dlen])
        dlen++;

    slen = 0;
    while (src[slen])
        slen++;

    if (dstsize <= dlen)
        return (dstsize + slen);

    i = dlen;
    j = 0;
    while (src[j] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dlen + slen);
}