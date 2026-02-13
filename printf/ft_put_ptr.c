/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:58:18 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/10 22:17:43 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(void *ptr)
{
	unsigned long	addr;
	int				count;

	/*if (!ptr)
		return (ft_put_str("(nil)"));*/
	addr = (unsigned long)ptr;
	count = 0;
	count += ft_put_str("0x");
	count += ft_put_nbr_base(addr, "0123456789abcdef");
	return (count);
}
