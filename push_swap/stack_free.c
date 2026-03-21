/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 14:34:55 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 14:45:18 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;
	int		i;

	if (!stack)
		return ;
	if (stack->head)
	{
		current = stack->head;
		i = 0;
		while (i < stack->size)
		{
			next = current->next;
			free(current);
			current = next;
			i++;
		}
	}
	free(stack);
}
