/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:01:32 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/04 01:10:40 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	if (n == 0 || dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
