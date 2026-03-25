/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:43:41 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:43:46 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_nbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		put_nbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

static void	print_ops(t_bench *bench)
{
	char	*names[11];
	int		i;

	names[0] = "sa";
	names[1] = "sb";
	names[2] = "ss";
	names[3] = "pa";
	names[4] = "pb";
	names[5] = "ra";
	names[6] = "rb";
	names[7] = "rr";
	names[8] = "rra";
	names[9] = "rrb";
	names[10] = "rrr";
	i = 0;
	while (i < 11)
	{
		write(2, "[bench] ", 8);
		write(2, names[i], 2 + (i >= 8));
		write(2, ": ", 2);
		put_nbr_fd(bench->counts[i], 2);
		write(2, "\n", 1);
		i++;
	}
}

void	print_bench(t_bench *bench, double disorder, t_strategy strat)
{
	int	d_int;
	int	d_dec;

	d_int = (int)(disorder * 100);
	d_dec = (int)(disorder * 10000) % 100;
	write(2, "[bench] Disorder: ", 18);
	put_nbr_fd(d_int, 2);
	write(2, ".", 1);
	if (d_dec < 10)
		write(2, "0", 1);
	put_nbr_fd(d_dec, 2);
	write(2, "%\n", 2);
	write(2, "[bench] Strategy: ", 18);
	if (strat == SIMPLE)
		write(2, "simple O(n^2)\n", 14);
	else if (strat == MEDIUM)
		write(2, "medium O(n*sqrt(n))\n", 20);
	else if (strat == COMPLEX)
		write(2, "complex O(n*log(n))\n", 20);
	else
		write(2, "adaptive\n", 9);
	write(2, "[bench] Total ops: ", 19);
	put_nbr_fd(bench->total, 2);
	write(2, "\n", 1);
	print_ops(bench);
}
