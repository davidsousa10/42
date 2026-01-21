/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <dsousa-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:01:59 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/01/21 19:24:17 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
    int i;
    int j;
    int len_s1;
    int len_s2; 
    char *join;

    i = 0;
    if (!s1 || !s2)
        return(0);
    while(s1[i])
    {
        i++;
    }
    len_s1 = i;
    i = 0;
    while(s2[i])
    {
        i++;
    }
    join = (char *)malloc(len_s1 + len_s1 + 1);
    if(!join)
        return (0);
    i = 0;
    while(i < len_s1)
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while(j < len_s2)
    {
        join[i + j] = s2[j];
        j++;
    }
    join[i + j] = '\0';
    return (join);
}
