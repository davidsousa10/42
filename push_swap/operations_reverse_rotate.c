/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:21:21 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:48:30 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->head = stack->head->prev;
}

void	rra(t_stack *a, t_bench *bench)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
	if (bench)
	{
		bench->counts[8]++;
		bench->total++;
	}
}

void	rrb(t_stack *b, t_bench *bench)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	if (bench)
	{
		bench->counts[9]++;
		bench->total++;
	}
}

void	rrr(t_stack *a, t_stack *b, t_bench *bench)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
	if (bench)
	{
		bench->counts[10]++;
		bench->total++;
	}
}
