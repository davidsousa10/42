/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:19:01 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/04 00:24:12 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size > len)
	{
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	else if (size > 0)
	{
		ft_memcpy(dst, src, (size - 1));
		dst[(size - 1)] = '\0';
	}
	return (len);
}
