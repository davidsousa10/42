/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 21:15:35 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:57:42 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(int, char *))
{
    int i;

    if (!s || !f)
        return ;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}