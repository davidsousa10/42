/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:40:51 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/02 23:30:44 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nb)
{
	int	len;

	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	long	nb;
	int		len;

	nb = (long)n;
	len = 0;
	if (nb <= 0)
		len = 1;
	if (nb < 0)
		nb = -nb;
	len += ft_len(nb);
	num = (char *)malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (len > (n < 0))
	{
		len--;
		num[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		num[0] = '-';
	return (num);
}
