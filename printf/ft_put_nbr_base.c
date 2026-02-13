/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:56:51 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/10 22:12:56 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr_base(unsigned long nb, char *base)
{
	int	base_len;
	int	count;

	base_len = 0;
	while (base[base_len])
		base_len++;
	count = 0;
	if (nb >= (unsigned long)base_len)
		count += ft_put_nbr_base(nb / base_len, base);
	count += ft_put_char(base[nb % base_len]);
	return (count);
}
