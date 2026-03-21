/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:50:54 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 20:52:47 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(int size)
{
	int	bits;
	int	max;

	max = size - 1;
	bits = 0;
	while (max > 0)
	{
		bits++;
		max >>= 1;
	}
	return (bits);
}

void	sort_complex(t_stack *a, t_stack *b)
{
	int	bits;
	int	size;
	int	bit;
	int	i;

	bits = get_max_bits(a->size);
	size = a->size;
	bit = 0;
	while (bit < bits)
	{
		i = 0;
		while (i < size)
		{
			if (((a->head->index >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (b->size > 0)
			pa(a, b);
		bit++;
	}
}
