/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:09:29 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/01 15:26:56 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (small[0] == '\0')
		return ((char *) big);
	while (i < len && i < big[i])
	{
		j = 0;
		if (big[i] == small[j])
		{
			j++;
			while (small[j] && small[j] == big[(i + j)] && i + j < len)
				j++;
			if (small[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
