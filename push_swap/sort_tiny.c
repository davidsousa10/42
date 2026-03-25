/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:44:01 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 20:54:21 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack *a, t_bench *bench)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = a->head->value;
	a2 = a->head->next->value;
	a3 = a->head->next->next->value;
	if (a1 > a2 && a2 < a3 && a1 < a3)
		sa(a, bench);
	else if (a1 > a2 && a2 < a3 && a1 > a3)
		ra(a, bench);
	else if (a1 < a2 && a2 > a3 && a1 < a3)
	{
		sa(a, bench);
		ra(a, bench);
	}
	else if (a1 < a2 && a2 > a3 && a1 > a3)
		rra(a, bench);
	else if (a1 > a2 && a2 > a3)
	{
		sa(a, bench);
		rra(a, bench);
	}
}

void	sort_tiny(t_stack *a, t_stack *b, t_bench *bench)
{
	if (a->size == 2)
	{
		if (a->head->value > a->head->next->value)
			sa(a, bench);
	}
	else if (a->size == 3)
		sort_three(a, bench);
	else
	{
		while (a->size > 3)
			push_min_to_b(a, b, bench);
		sort_three(a, bench);
		while (b->size > 0)
			pa(a, b, bench);
	}
}
