/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:13:42 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:49:21 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, int start, int len)
{
    char    *sub;
    int     i;
    int     s_len;

    if (!s)
        return (0);

    s_len = ft_strlen(s);

    if (start < 0)
        start = 0;

    if (start >= s_len || len <= 0)
    {
        sub = (char *)malloc(1);
        if (!sub)
            return (0);
        sub[0] = '\0';
        return (sub);
    }

    if (len > s_len - start)
        len = s_len - start;

    sub = (char *)malloc(len + 1);
    if (!sub)
        return (0);

    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}