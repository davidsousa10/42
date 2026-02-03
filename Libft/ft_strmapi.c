/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:31:43 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/03 18:42:45 by dsousa-o         ###   ########.fr       */
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