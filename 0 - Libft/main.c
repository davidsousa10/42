#include <stdio.h>
#include "libft.h"

int main(void)
{
    char tests[] = {'A', 'z', '0', '5', '9', 'a', '-', ' ', '\n'};
    int i = 0;

    printf(" char | isalpha | isdigit | isalnum\n");
    printf("------+---------+----------+---------\n");

    while (i < 9)
    {
        if (tests[i] == '\n')
            printf("\\n   |");
        else
            printf(" '%c'  |", tests[i]);

        printf("    %d    |    %d     |    %d\n",
               ft_isalpha(tests[i]),
               ft_isdigit(tests[i]),
               ft_isalnum(tests[i]));
        i++;
    }
    return (0);
}