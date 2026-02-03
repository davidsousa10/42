/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:47:58 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/03 21:01:37 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*new ;
	t_list	*lst ;
	t_list	*temp;
	int	i = 42;

	new = ft_lstnew("david");
	lst = ft_lstnew("hola");
	ft_lstadd_front(&lst, new);
*/