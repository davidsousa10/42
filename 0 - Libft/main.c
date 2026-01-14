#include <stdio.h>
#include "libft.h"

void    test_ctype(void)
{
    char tests[] = {'A', 'z', '0', '9', 'a', '-', ' ', '\n', 127, 128};
    int i = 0;

    printf("=== CTYPE TESTS ===\n");
    printf(" char | isalpha | isdigit | isalnum | isascii | isprint\n");
    printf("------+---------+----------+---------+----------+---------\n");

    while (i < 10)
    {
        if (tests[i] == '\n')
            printf("\\n   |");
        else if (tests[i] < 32 || tests[i] > 126)
            printf("%3d  |", tests[i]);
        else
            printf(" '%c'  |", tests[i]);

        printf("    %d    |    %d     |    %d    |    %d     |    %d\n",
               ft_isalpha(tests[i]),
               ft_isdigit(tests[i]),
               ft_isalnum(tests[i]),
               ft_isascii(tests[i]),
               ft_isprint(tests[i]));
        i++;
    }
    printf("\n");
}

void    test_strlen(void)
{
    printf("=== STRLEN TESTS ===\n");
    printf("\"hola\"  -> %zu\n", ft_strlen("hola"));
    printf("\"\"      -> %zu\n", ft_strlen(""));
    printf("\"libft\" -> %zu\n", ft_strlen("libft"));
    printf("\n");
}

void    test_memset(void)
{
    char s[10] = "abcdefghi";

    printf("=== MEMSET TESTS ===\n");
    printf("before: %s\n", s);
    ft_memset(s, 'X', 4);
    printf("after : %s\n", s);
    printf("\n");
}

void    test_bzero(void)
{
    char s[10] = "abcdefghi";

    printf("=== BZERO TESTS ===\n");
    printf("before: %s\n", s);
    ft_bzero(s, 5);
    printf("after : %s\n", s);
    printf("\n");
}

int main(void)
{
    test_ctype();
    test_strlen();
    test_memset();
    test_bzero();
    return (0);
}
