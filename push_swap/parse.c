/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:00:14 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/21 17:35:14 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_flag(char *str)
{
	if (!str)
		return (NONE);
	if (ft_strcmp(str, "--simple") == 0)
		return (SIMPLE);
	if (ft_strcmp(str, "--medium") == 0)
		return (MEDIUM);
	if (ft_strcmp(str, "--complex") == 0)
		return (COMPLEX);
	if (ft_strcmp(str, "--adaptive") == 0)
		return (ADAPTIVE);
	return (NONE);
}

static void	validate_and_add(t_stack *a, char *str)
{
	long	num;
	t_node	*node;

	if (!is_valid_number(str))
		error_exit(a, NULL);
	num = ft_atol(str);
	if (num > 2147483647 || num < -2147483648)
		error_exit(a, NULL);
	if (has_duplicate(a, (int)num))
		error_exit(a, NULL);
	node = new_node((int)num);
	if (!node)
		error_exit(a, NULL);
	stack_push_back(a, node);
}

t_stack	*parse_args(int argc, char **argv, t_strategy *strat)
{
	t_stack	*a;
	int		i;

	a = init_stack();
	if (!a)
		return (NULL);
	*strat = parse_flag(argv[1]);
	if (*strat == NONE)
	{
		*strat = ADAPTIVE;
		i = 1;
	}
	else
		i = 2;
	while (i < argc)
	{
		validate_and_add(a, argv[i]);
		i++;
	}
	return (a);
}
