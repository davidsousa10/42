/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:53:14 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/19 23:00:13 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;
    int i;

    i = 0;
    while (s[i])
        i++;
    str = malloc(i + 1);
    if(!str)
        return(0);
    i = 0;
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }   
    str[i] = '\0';
    return (str);
}