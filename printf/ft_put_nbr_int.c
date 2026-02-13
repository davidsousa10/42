/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:55:36 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/10 22:14:02 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr_int(int n)
{
	long	nb;
	int		count;

	nb = (long)n;
	count = 0;
	if (nb < 0)
	{
		count += ft_put_char('-');
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_put_nbr_int((int)(nb / 10));
	count += ft_put_char((char)('0' + (nb % 10)));
	return (count);
}
