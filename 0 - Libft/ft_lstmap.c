/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:08:45 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:08:49 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *new_node;
    void    *new_content;

    if (!lst || !f || !del)
        return (0);

    new_list = NULL;
    while (lst)
    {
        new_content = f(lst->content);
        if (!new_content)
        {
            ft_lstclear(&new_list, del);
            return (0);
        }
        new_node = ft_lstnew(new_content);
        if (!new_node)
        {
            del(new_content);
            ft_lstclear(&new_list, del);
            return (0);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}