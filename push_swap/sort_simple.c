/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 18:33:05 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:51:23 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_pos(t_stack *stack)
{
	t_node	*current;
	int		min_index;
	int		min_pos;
	int		i;

	current = stack->head;
	min_index = current->index;
	min_pos = 0;
	i = 0;
	while (i < stack->size)
	{
		if (current->index < min_index)
		{
			min_index = current->index;
			min_pos = i;
		}
		current = current->next;
		i++;
	}
	return (min_pos);
}

void	push_min_to_b(t_stack *a, t_stack *b, t_bench *bench)
{
	int	pos;

	pos = find_min_pos(a);
	if (pos <= a->size / 2)
	{
		while (pos > 0)
		{
			ra(a, bench);
			pos--;
		}
	}
	else
	{
		pos = a->size - pos;
		while (pos > 0)
		{
			rra(a, bench);
			pos--;
		}
	}
	pb(a, b, bench);
}

void	sort_simple(t_stack *a, t_stack *b, t_bench *bench)
{
	int	size;

	size = a->size;
	while (a->size > 0)
		push_min_to_b(a, b, bench);
	while (size > 0)
	{
		pa(a, b, bench);
		size--;
	}
}
