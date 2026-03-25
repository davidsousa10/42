/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:13:37 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:48:38 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->head = stack->head->next;
}

void	ra(t_stack *a, t_bench *bench)
{
	rotate(a);
	write(1, "ra\n", 3);
	if (bench)
	{
		bench->counts[5]++;
		bench->total++;
	}
}

void	rb(t_stack *b, t_bench *bench)
{
	rotate(b);
	write(1, "rb\n", 3);
	if (bench)
	{
		bench->counts[6]++;
		bench->total++;
	}
}

void	rr(t_stack *a, t_stack *b, t_bench *bench)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	if (bench)
	{
		bench->counts[7]++;
		bench->total++;
	}
}
