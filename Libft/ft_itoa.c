/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:40:51 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/04 00:55:27 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	mem;

	mem = 1;
	while (n > 9)
	{
		n = n / 10;
		mem++;
	}
	return (mem);
}

char	*ft_itoa(int n)
{
	char		*num;
	int			mem;
	long		ntemp;

	ntemp = n;
	mem = 0;
	if (ntemp < 0)
	{
		ntemp = -ntemp;
		mem += 1;
	}
	mem = mem + ft_len(ntemp);
	num = malloc (sizeof(char) * (mem + 1));
	if (!num)
		return (NULL);
	num[mem] = '\0';
	while (ntemp > 9)
	{
		num[--mem] = (ntemp % 10) + '0';
		ntemp = ntemp / 10;
	}
	num[--mem] = ntemp + '0';
	if (n < 0)
		num[0] = '-';
	return (num);
}
