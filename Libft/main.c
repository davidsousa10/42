#include "libft.h"
#include <stdio.h>

/* ==================== */
/*  FUNCIONES AUX LIST  */
/* ==================== */

void    del(void *content)
{
    free(content);
}

void    print_list(void *content)
{
    printf("%s\n", (char *)content);
}

void    *dup_content(void *content)
{
    return (ft_strdup((char *)content));
}

/* ==================== */
/*         MAIN         */
/* ==================== */

int main(void)
{
    /* ====== PARTE 1 ====== */
    printf("== IS FUNCTIONS ==\n");
    printf("isalpha('A') = %d\n", ft_isalpha('A'));
    printf("isdigit('4') = %d\n", ft_isdigit('4'));
    printf("isalnum('a') = %d\n", ft_isalnum('a'));
    printf("isascii(127) = %d\n", ft_isascii(127));
    printf("isprint(32) = %d\n\n", ft_isprint(32));

    printf("== STRING / MEM ==\n");
    printf("strlen(\"Hola\") = %d\n", ft_strlen("Hola"));

    char buf[20];
    ft_memset(buf, 'A', 5);
    buf[5] = '\0';
    printf("memset: %s\n", buf);

    char s1[] = "Hola42";
    char s2[10];
    ft_memcpy(s2, s1, 7);
    printf("memcpy: %s\n", s2);

    printf("strchr: %s\n\n", ft_strchr("abcdef", 'd'));

    /* ====== PARTE 2 ====== */
    printf("== PARTE 2 ==\n");
    char *join = ft_strjoin("Hola ", "libft");
    printf("strjoin: %s\n", join);
    free(join);

    char *trim = ft_strtrim("  Hola 42  ", " ");
    printf("strtrim: '%s'\n", trim);
    free(trim);

    char **split = ft_split("Hola 42 Madrid", ' ');
    int i = 0;
    while (split[i])
    {
        printf("split[%d] = %s\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);

    char *itoa = ft_itoa(-42);
    printf("itoa: %s\n\n", itoa);
    free(itoa);

    /* ====== FD ====== */
    printf("== FD ==\n");
    ft_putendl_fd("Hola por fd 1", 1);
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    /* ====== LISTAS ====== */
    printf("\n== LISTAS ==\n");

    t_list *lst = NULL;

    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Uno")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Dos")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Tres")));

    printf("lstsize = %d\n", ft_lstsize(lst));
    printf("lstlast = %s\n", (char *)ft_lstlast(lst)->content);

    printf("\nIter list:\n");
    ft_lstiter(lst, print_list);

    t_list *new = ft_lstmap(lst, dup_content, del);

    printf("\nMapped list:\n");
    ft_lstiter(new, print_list);

    ft_lstclear(&lst, del);
    ft_lstclear(&new, del);

    return (0);
}