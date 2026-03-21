/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 18:21:03 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 18:21:08 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_stack *stack)
{
	t_node	*current;
	t_node	*compare;
	int		mistakes;
	int		total;

	if (stack->size < 2)
		return (0.0);
	mistakes = 0;
	total = 0;
	current = stack->head;
	while (current->next != stack->head)
	{
		compare = current->next;
		while (compare != stack->head)
		{
			total++;
			if (current->value > compare->value)
				mistakes++;
			compare = compare->next;
		}
		current = current->next;
	}
	return ((double)mistakes / (double)total);
}
