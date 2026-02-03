/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:42:40 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/03 20:46:05 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int	main(void)
{
	t_list	*new ;
	t_list	*new2 ;
	int		i = 42;

	new = ft_lstnew(&i);
	printf("%i", *(int *) new->content);

	new2 = ft_lstnew("hello");
	printf("%s", (char *) new2->content);
	printf("%s", (char *) new2->next);
}
*/