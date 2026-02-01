/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:15:52 by davidsousao       #+#    #+#             */
/*   Updated: 2026/02/01 17:55:41 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void	*p;

    if (count == 0 || size == 0)
		return(malloc(0));
	if(count * size / size != count)
		return (NULL);
    p = malloc(count * size);
    if(!p)
        return(0);
    ft_bzero(p, count * size);
    return(p);
}