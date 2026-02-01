/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:41:02 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:52:55 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  is_in_set(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *sub;
    int     start;
    int     end;
    int     i;

    if (!s1 || !set)
        return (0);

    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    end = ft_strlen(s1) - 1;
    while (end >= start && is_in_set(s1[end], set))
        end--;

    sub = (char *)malloc(end - start + 2);
    if (!sub)
        return (0);

    i = 0;
    while (start <= end)
    {
        sub[i] = s1[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}