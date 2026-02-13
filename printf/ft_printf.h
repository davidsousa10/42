/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:35:01 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/10 22:19:03 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_put_char(char c);
int	ft_put_str(char *s);
int	ft_put_nbr_int(int n);
int	ft_put_nbr_unsigned(unsigned int n);
int	ft_put_nbr_base(unsigned long nb, char *base);
int	ft_put_ptr(void *ptr);
int	ft_printf(char const *format, ...);

#endif 