/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:35:35 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 22:19:30 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_stack *stack)
{
	t_node	*current;
	int		i;

	if (stack->size < 2)
		return (1);
	current = stack->head;
	i = 0;
	while (i < stack->size - 1)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
		i++;
	}
	return (1);
}

static void	select_sort(t_stack *a, t_stack *b, t_strategy strat)
{
	assign_index(a);
	if (strat == SIMPLE)
		sort_simple(a, b);
	else if (strat == MEDIUM)
		sort_medium(a, b);
	else if (strat == COMPLEX)
		sort_complex(a, b);
	else
		sort_adaptive(a, b);
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_strategy	strat;

	if (argc < 2)
		return (0);
	a = parse_args(argc, argv, &strat);
	if (!a || a->size == 0)
	{
		free_stack(a);
		return (0);
	}
	b = init_stack();
	if (!b)
	{
		free_stack(a);
		return (1);
	}
	if (!is_sorted(a))
		select_sort(a, b, strat);
	free_stack(a);
	free_stack(b);
	return (0);
}
