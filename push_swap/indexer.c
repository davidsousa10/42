/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:48:47 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 18:01:55 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack)
{
	t_node	*current;
	t_node	*compare;
	int		i;
	int		j;

	current = stack->head;
	i = 0;
	while (i < stack->size)
	{
		current->index = 0;
		compare = stack->head;
		j = 0;
		while (j < stack->size)
		{
			if (compare->value < current->value)
				current->index++;
			compare = compare->next;
			j++;
		}
		current = current->next;
		i++;
	}
}
