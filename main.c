#include "libft.h"

int main()
{
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
	char *str2;
	str2 = ft_substr(str2, 2, 5);
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
	printf("|*--------------------------------------*|\n");

	printf("\n\n");

	printf("|*---------------ft_strtrim---------------*|\n");
	printf("|*----------------------------------------*|\n");
}
