/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:13:42 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/20 19:34:24 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int s_len;
    char *sub;
    
    if (!s)
        return (0);
    s_len = 0;
    while (!s)
    {
        s_len++;
    }
    if (star >= s_len)
    {
        sub = malloc(1);
        if (!sub)
            retun (0);
        sub[0] = '\0';
        return (sub);
    }
    if (len > s_len - start)
        len = s_len - start;
    sub = malloc(len + 1);
    if (!sub)
        return (0);
    i = 0;
    while (i < len)
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return(sub);
}