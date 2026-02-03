/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:21:10 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/03 20:32:03 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapi;

	if (!s || !f)
		return (NULL);
	i = 0;
	mapi = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mapi)
		return (NULL);
	while (s[i])
	{
		mapi[i] = f (i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
