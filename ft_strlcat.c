/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <dsousa-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:48:47 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/16 20:44:26 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dst, char *src, int size)
{
    int i;
    int j;
    int l_dst;
    int l_src;

    i = 0;
    j = 0;
    l_dst = 0;
    l_src = 0;
    while(dst[l_dst] != '\0' && l_dst < size)
    {
        l_dst++;
    }
    while(src[l_src] != '\0')
    {
        l_src++;
    }
   if(l_dst == size)
        return(size + l_src);
    i = l_dst;
   while(src[j] =! '\0' && i < size - 1)
   {
    dst[i] = src[j];
    i++;
    j++;
   }
   dst[i] = '\0';
   return (l_dst + l_src);
}