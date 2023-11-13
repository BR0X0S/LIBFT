#include "libft.h"

int main()
{
    printf("|*---------------ft_atoi---------------*|\n");
    char *stra = "0";
    
    printf("%d\n", atoi(stra));
    printf("%d\n", ft_atoi(stra));
    printf("|*-------------------------------------*|\n");

    // Test ft_bzero
    printf("\n\n");
    printf("|*---------------ft_bzero--------------*|\n");
    char bzero_str[10];
    ft_bzero(bzero_str, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", bzero_str[i]);
    }
    printf("\n");
    printf("|*-------------------------------------*|\n");

    // Test ft_calloc
    printf("\n\n");
    printf("|*---------------ft_calloc-------------*|\n");
    int *calloc_arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", calloc_arr[i]);
    }
    printf("\n");
    free(calloc_arr); // Don't forget to free allocated memory
    printf("|*-------------------------------------*|\n");

    // Test ft_isalnum
    printf("\n\n");
    printf("|*--------------ft_isalnum-------------*|\n");
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('5'));
    printf("%d\n", ft_isalnum('@'));
    printf("|*-------------------------------------*|\n");

    printf("\n\n");

    printf("|*---------------ft_strjoin---------------*|\n");
    char sj1[] = "oussama";
    char *sj2 = NULL;
    char *sj;
    sj = ft_strjoin(sj1, sj2);
    printf("%s\n", sj);
    printf("|*----------------------------------------*|\n");

    printf("\n\n");

    printf("|*---------------ft_substr---------------*|\n");
    char str[] = "oussama mondad";
    char *str2 = ft_substr(str, 2, 5); // Allocate memory for str2
    printf("%s\n", str2);
    printf("|*---------------------------------------*|\n");

    printf("\n\n");

    printf("|*---------------ft_strtrim---------------*|\n");
    char st1[] = "aaaoussamallll";
    char set[] = "al";
    char *st = ft_strtrim(st1, set);
    char *st2 = ft_strtrim("zzzzzzzz", "z");
    printf("%s\n", st);
    printf("%s\n", st2);
    printf("|*----------------------------------------*|\n");

    printf("\n\n");

    printf("|*---------------ft_split---------------*|\n");
    int i = 0;
    char **ssp = ft_split("hello, simo, ,, ,how,,", ',');
    while (ssp[i])
    {
        printf("%s\n", ssp[i]);
        free(ssp[i]); // Free each string
        i++;
    }
    free(ssp); // Free the array of strings
    printf("|*--------------------------------------*|\n");

    printf("\n\n");

    printf("|*---------------ft_strtrim---------------*|\n");
    printf("|*----------------------------------------*|\n");

    return 0;
}