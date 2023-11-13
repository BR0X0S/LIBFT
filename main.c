#include "libft.h"


int main() 
{
    // Example usage of the functions
    printf("ft_atoi: %d\n", ft_atoi("123"));

    char buffer[10];
    ft_bzero(buffer, sizeof(buffer));
    printf("ft_bzero: ");
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("ft_calloc: %p\n", (void *)arr);

    printf("ft_isalnum: %d\n", ft_isalnum('A'));
    printf("ft_isalpha: %d\n", ft_isalpha('A'));
    printf("ft_isascii: %d\n", ft_isascii(127));
    printf("ft_isdigit: %d\n", ft_isdigit('9'));
    printf("ft_isprint: %d\n", ft_isprint(' '));

    char str1[] = "hello";
    char str2[] = "world";
    printf("ft_memchr: %p\n", ft_memchr(str1, 'l', 5));
    printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 5));

    char dest[10];
    ft_memcpy(dest, str1, 5);
    printf("ft_memcpy: %s\n", dest);

    char src[] = "copy this";
    ft_memmove(dest, src, 10);
    printf("ft_memmove: %s\n", dest);

    ft_memset(dest, '*', 5);
    printf("ft_memset: %s\n", dest);

    char *s = "hello";
    printf("ft_strchr: %s\n", ft_strchr(s, 'e'));

    char *dup = ft_strdup(s);
    printf("ft_strdup: %s\n", dup);
    free(dup);

    char dest_cat[20] = "hello";
    char src_cat[] = ", world!";
    printf("ft_strlcat: %lu\n", ft_strlcat(dest_cat, src_cat, sizeof(dest_cat)));
    printf("ft_strlcpy: %lu\n", ft_strlcpy(dest_cat, src_cat, sizeof(dest_cat)));

    printf("ft_strlen: %lu\n", ft_strlen(s));

    char s1[] = "abc";
    char s2[] = "abd";
    printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 2));

    char haystack[] = "hello world";
    char needle[] = "world";
    printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, sizeof(haystack)));

    printf("ft_strrchr: %s\n", ft_strrchr(s, 'l'));

    printf("ft_tolower: %c\n", ft_tolower('A'));
    printf("ft_toupper: %c\n", ft_toupper('a'));

    char substr[] = "substring";
    printf("ft_substr: %s\n", ft_substr(substr, 0, 4));

    char s1_join[] = "hello";
    char s2_join[] = ", world!";
    printf("ft_strjoin: %s\n", ft_strjoin(s1_join, s2_join));

    char s_trim[] = "   trim me   ";
    char set_trim[] = " ";
    printf("ft_strtrim: %s\n", ft_strtrim(s_trim, set_trim));

    char **split_result = ft_split("hello,simo,,,,how,,", ',');
    int i = 0;
    while (split_result[i])
	{
        printf("ft_split: %s\n", split_result[i]);
        free(split_result[i]);
        i++;
    }
    free(split_result);

	char *itoa = ft_itoa(-127877);
	char *itoa1 = ft_itoa(303847878);
	char *itoa2 = ft_itoa(0);

	printf("ft_itoa: %s\n",itoa);
	printf("ft_itoa: %s\n",itoa1);
	printf("ft_itoa: %s\n",itoa2);

	free(itoa);
	free(itoa1);
	free(itoa2);
    return 0;
}
