/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:35:02 by davidsousao       #+#    #+#             */
/*   Updated: 2026/02/01 20:24:52 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *node;

    node = (t_list *)malloc(sizeof(t_list));
    if(!node)
        return(0);
    node->content = content;
    node->next = NULL;
    return(node);
}
