/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:38:13 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:55:40 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  num_len(int n)
{
    int len;

    len = 0;
    if (n <= 0)
        len = 1;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *res;
    long    nb;
    int     len;

    nb = n;
    len = num_len(n);

    res = (char *)malloc(len + 1);
    if (!res)
        return (0);

    res[len] = '\0';
    if (nb == 0)
        res[0] = '0';
    if (nb < 0)
    {
        res[0] = '-';
        nb = -nb;
    }
    while (nb > 0)
    {
        len--;
        res[len] = (nb % 10) + '0';
        nb /= 10;
    }
    return (res);
}