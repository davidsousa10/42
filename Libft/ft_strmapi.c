/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 21:04:07 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:56:34 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(int, char))
{
    char    *res;
    int     i;
    int     len;

    if (!s || !f)
        return (0);

    len = ft_strlen(s);
    res = (char *)malloc(len + 1);
    if (!res)
        return (0);

    i = 0;
    while (i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}