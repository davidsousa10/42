/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 13:16:40 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/03/25 21:01:27 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;
}	t_stack;

typedef enum e_strategy
{
	ADAPTIVE,
	SIMPLE,
	MEDIUM,
	COMPLEX,
	NONE
}	t_strategy;

typedef struct s_bench
{
	int	counts[11];
	int	total;
}	t_bench;

/* stack.c */
t_node		*new_node(int value);
t_stack		*init_stack(void);
void		stack_push_back(t_stack *stack, t_node *node);
void		stack_push_front(t_stack *stack, t_node *node);
t_node		*stack_pop_front(t_stack *stack);

/* stack_free.c */
void		free_stack(t_stack *stack);

/* operations */
void		sa(t_stack *a, t_bench *bench);
void		sb(t_stack *b, t_bench *bench);
void		ss(t_stack *a, t_stack *b, t_bench *bench);
void		pa(t_stack *a, t_stack *b, t_bench *bench);
void		pb(t_stack *a, t_stack *b, t_bench *bench);
void		ra(t_stack *a, t_bench *bench);
void		rb(t_stack *b, t_bench *bench);
void		rr(t_stack *a, t_stack *b, t_bench *bench);
void		rra(t_stack *a, t_bench *bench);
void		rrb(t_stack *b, t_bench *bench);
void		rrr(t_stack *a, t_stack *b, t_bench *bench);

/* parse.c */
int			parse_flag(char *str);
t_stack		*parse_args(int argc, char **argv, t_strategy *strat, int *bench_flag);

/* parse_utils.c */
int			is_valid_number(const char *str);
long		ft_atol(const char *str);
int			has_duplicate(t_stack *stack, int value);

/* error.c */
void		error_exit(t_stack *a, t_stack *b);

/* utils.c */
int			ft_strcmp(const char *s1, const char *s2);

/* indexer.c */
void		assign_index(t_stack *stack);

/* disorder.c */
double		compute_disorder(t_stack *stack);

/* sort */
void		sort_simple(t_stack *a, t_stack *b, t_bench *bench);
void		sort_medium(t_stack *a, t_stack *b, t_bench *bench);
void		sort_complex(t_stack *a, t_stack *b, t_bench *bench);
void		sort_adaptive(t_stack *a, t_stack *b, t_bench *bench);
void		sort_tiny(t_stack *a, t_stack *b, t_bench *bench);
void		push_min_to_b(t_stack *a, t_stack *b, t_bench *bench);
void		print_bench(t_bench *bench, double disorder, t_strategy strat);

#endif