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
	str2 = ft_substr(str, 2, 5);
	printf("%s\n", str2);
	printf("|*---------------------------------------*|\n");

	printf("\n\n");

	printf("|*---------------ft_substr---------------*|\n");
	printf("|*---------------------------------------*|\n");

}
