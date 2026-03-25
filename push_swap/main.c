/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:35:35 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 21:02:43 by dsousa-o         ###   ########.fr       */
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

static void	init_bench(t_bench *bench)
{
	int	i;

	i = 0;
	while (i < 11)
		bench->counts[i++] = 0;
	bench->total = 0;
}

static void	select_sort(t_stack *a, t_stack *b, t_strategy strat,
		t_bench *bench)
{
	assign_index(a);
	if (a->size <= 5)
		sort_tiny(a, b, bench);
	else if (strat == SIMPLE)
		sort_simple(a, b, bench);
	else if (strat == MEDIUM)
		sort_medium(a, b, bench);
	else if (strat == COMPLEX)
		sort_complex(a, b, bench);
	else
		sort_adaptive(a, b, bench);
}

static void	run_sort(t_stack *a, t_stack *b, t_strategy strat, int bench_flag)
{
	t_bench	bench;
	double	disorder;

	init_bench(&bench);
	disorder = compute_disorder(a);
	if (bench_flag)
		select_sort(a, b, strat, &bench);
	else
		select_sort(a, b, strat, NULL);
	if (bench_flag)
		print_bench(&bench, disorder, strat);
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_strategy	strat;
	int			bench_flag;

	if (argc < 2)
		return (0);
	a = parse_args(argc, argv, &strat, &bench_flag);
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
		run_sort(a, b, strat, bench_flag);
	free_stack(a);
	free_stack(b);
	return (0);
}
