/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:53:35 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/19 00:55:19 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *substr, int len)
{
    int i;
    int j;

    i = 0;
    if (substr[0] == '\0')
        return((char *)str);
    while (str[i] != '\0' && i < len)
    {
        j = 0;
        while (substr[j] != '\0' && str[i + j] != 0 && (i + j < len) && str[i + j] == substr[j])
        {
            j++;
        }
        if (substr[j] == '\0')
            return((char *)(str + i));
        i++;
    }
    return (0);
}