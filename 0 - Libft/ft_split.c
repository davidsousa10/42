/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsousaorta <davidsousaorta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:59:58 by davidsousao       #+#    #+#             */
/*   Updated: 2026/01/26 19:54:26 by davidsousao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}

static char *get_word(char const *s, int start, int len)
{
    char    *word;
    int     i;

    word = (char *)malloc(len + 1);
    if (!word)
        return (0);
    i = 0;
    while (i < len)
    {
        word[i] = s[start + i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     i;
    int     j;
    int     start;

    if (!s)
        return (0);

    res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!res)
        return (0);

    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            start = i;
            while (s[i] && s[i] != c)
                i++;
            res[j++] = get_word(s, start, i - start);
        }
    }
    res[j] = 0;
    return (res);
}