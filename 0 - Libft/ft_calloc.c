/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:15:52 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/19 23:13:01 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(int count, int size)
{
    void *p;
    int total;

    if (count == 0 || size == 0)
    {
        p = malloc(1);
        if (!p)
            return (0);
        return (p);
    }
    total = count * size;
    p = malloc(total);
    if(!p)
        return(0);
    ft_bzero(p, total);
    return(p);
}