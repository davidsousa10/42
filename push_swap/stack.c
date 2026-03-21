/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 13:53:24 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 14:32:34 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->next = node;
	node->prev = node;
	return (node);
}

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->head = NULL;
	stack->size = 0;
	return (stack);
}

void	stack_push_back(t_stack *stack, t_node *node)
{
	t_node	*tail;

	if (stack->size == 0)
	{
		stack->head = node;
		node->next = node;
		node->prev = node;
	}
	else
	{
		tail = stack->head->prev;
		tail->next = node;
		node->prev = tail;
		node->next = stack->head;
		stack->head->prev = node;
	}
	stack->size++;
}

void	stack_push_front(t_stack *stack, t_node *node)
{
	if (stack->size == 0)
	{
		stack->head = node;
		node->next = node;
		node->prev = node;
	}
	else
	{
		node->next = stack->head;
		node->prev = stack->head->prev;
		stack->head->prev->next = node;
		stack->head->prev = node;
		stack->head = node;
	}
	stack->size++;
}

t_node	*stack_pop_front(t_stack *stack)
{
	t_node	*popped;

	if (stack->size == 0)
		return (NULL);
	popped = stack->head;
	if (stack->size == 1)
	{
		stack->head = NULL;
	}
	else
	{
		stack->head->prev->next = stack->head->next;
		stack->head->next->prev = stack->head->prev;
		stack->head = stack->head->next;
	}
	stack->size--;
	popped->next = popped;
	popped->prev = popped;
	return (popped);
}
