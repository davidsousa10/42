/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:35:02 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:02:07 by davidsousao      ###   ########.fr       */
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