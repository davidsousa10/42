/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 15:50:46 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:48:45 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->head->value;
	stack->head->value = stack->head->next->value;
	stack->head->next->value = tmp;
	tmp = stack->head->index;
	stack->head->index = stack->head->next->index;
	stack->head->next->index = tmp;
}

void	sa(t_stack *a, t_bench *bench)
{
	swap(a);
	write(1, "sa\n", 3);
	if (bench)
	{
		bench->counts[0]++;
		bench->total++;
	}
}

void	sb(t_stack *b, t_bench *bench)
{
	swap(b);
	write(1, "sb\n", 3);
	if (bench)
	{
		bench->counts[1]++;
		bench->total++;
	}
}

void	ss(t_stack *a, t_stack *b, t_bench *bench)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	if (bench)
	{
		bench->counts[2]++;
		bench->total++;
	}
}
