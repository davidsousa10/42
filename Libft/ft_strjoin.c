/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:01:59 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/26 19:50:39 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    int     i;
    int     j;
    int     len1;
    int     len2;

    if (!s1 || !s2)
        return (0);

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    join = (char *)malloc(len1 + len2 + 1);
    if (!join)
        return (0);

    i = 0;
    while (i < len1)
    {
        join[i] = s1[i];
        i++;
    }

    j = 0;
    while (j < len2)
    {
        join[i + j] = s2[j];
        j++;
    }

    join[i + j] = '\0';
    return (join);
}