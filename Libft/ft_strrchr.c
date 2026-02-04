/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:03:24 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/04 01:02:43 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*last;

	cc = (char)c;
	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			last = (char *)&s[i];
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return (last);
}
