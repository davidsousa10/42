/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 18:49:14 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:53:18 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_chunk_size(int size)
{
	int	i;

	i = 1;
	while (i * i < size)
		i++;
	return (size / i + 1);
}

static int	find_max_pos(t_stack *stack)
{
	t_node	*current;
	int		max_index;
	int		max_pos;
	int		i;

	current = stack->head;
	max_index = current->index;
	max_pos = 0;
	i = 0;
	while (i < stack->size)
	{
		if (current->index > max_index)
		{
			max_index = current->index;
			max_pos = i;
		}
		current = current->next;
		i++;
	}
	return (max_pos);
}

static void	push_all_back(t_stack *a, t_stack *b, t_bench *bench)
{
	int	pos;

	while (b->size > 0)
	{
		pos = find_max_pos(b);
		if (pos <= b->size / 2)
		{
			while (pos > 0)
			{
				rb(b, bench);
				pos--;
			}
		}
		else
		{
			pos = b->size - pos;
			while (pos > 0)
			{
				rrb(b, bench);
				pos--;
			}
		}
		pa(a, b, bench);
	}
}

static void	push_chunk_to_b(t_stack *a, t_stack *b, int min, int max, t_bench *bench)
{
	int	size;

	size = a->size;
	while (size > 0 && a->size > 0)
	{
		if (a->head->index >= min && a->head->index <= max)
		{
			pb(a, b, bench);
			if (b->size > 1 && b->head->index < min + (max - min) / 2)
				rb(b, bench);
		}
		else
			ra(a, bench);
		size--;
	}
}

void	sort_medium(t_stack *a, t_stack *b, t_bench *bench)
{
	int	chunk_size;
	int	min;
	int	max;

	chunk_size = get_chunk_size(a->size);
	min = 0;
	max = chunk_size - 1;
	while (min < a->size + b->size)
	{
		push_chunk_to_b(a, b, min, max, bench);
		min += chunk_size;
		max += chunk_size;
		if (max >= a->size + b->size)
			max = a->size + b->size - 1;
	}
	push_all_back(a, b, bench);
}
