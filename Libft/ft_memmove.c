/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:19:40 by davidsousao       #+#    #+#             */
/*   Updated: 2026/02/01 13:54:59 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (d > s)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n > 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
	else
		ft_memcpy (dst, src, n);
	return (dst);
}
