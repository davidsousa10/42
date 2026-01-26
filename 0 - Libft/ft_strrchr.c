/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:03:24 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/26 19:33:30 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char cc;
    char *last;

    i = 0;
    cc = (char) c;
    last = NULL;

    while (s[i] != '\0')
    {
        if(s[i] == cc)
            last = (char*)&s[i];
            i++;
    }
    if (c == '\0')
        return ((char*)&s[i]);
    return (last);
}