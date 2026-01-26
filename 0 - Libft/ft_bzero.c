/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:16:20 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/26 19:26:33 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, int n)
{
    int i;
    unsigned char *p;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}