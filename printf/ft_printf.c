/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:20:59 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/10 22:10:36 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_format(va_list *va, const char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_put_char((char)va_arg(*va, int));
	else if (type == 's')
		count += ft_put_str(va_arg(*va, char *));
	else if (type == 'p')
		count += ft_put_ptr(va_arg(*va, void *));
	else if (type == 'd' || type == 'i')
		count += ft_put_nbr_int(va_arg(*va, int));
	else if (type == 'u')
		count += ft_put_nbr_unsigned(va_arg(*va, unsigned int));
	else if (type == 'x')
		count += ft_put_nbr_base(va_arg(*va, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		count += ft_put_nbr_base(va_arg(*va, unsigned int), "0123456789ABCDEF");
	else
		count += ft_put_char(type);
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				i++;
			else
			{
				count += ft_format(&args, format[i + 1]);
				i += 2;
			}
		}
		else
		{
			count += ft_put_char(format[i]);
			i++;
		}
	}
	va_end (args);
	return (count);
}
