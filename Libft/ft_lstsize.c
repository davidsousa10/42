/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 23:52:21 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/03 23:53:58 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		size;

	size = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
