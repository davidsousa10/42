/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <dsousa-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:33:14 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/16 20:44:26 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    if (n <= 0)
        return (0);
    while(i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;
    }
    return (0);
}