/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <dsousa-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:41:02 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/21 19:51:39 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_set(char c, const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
            i++;
    }
    return (0);
}

int *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int start;
    int end;
    char *sub;

    if(!set || !s1)
        return(0);
    start = 0;
    while(s1[start] && is_set(s1[start], set))
        start++;
    end = 0;
    while(s1[end])
        end++;
    end--;
    
    

}