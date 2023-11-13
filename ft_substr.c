/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:18:59 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/11 17:29:29 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*place;
	char	*str;
	char	*nstr;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	place = malloc (len + 1);
	if (!place)
		return (NULL);
	if (len >= ft_strlen(str))
	{
		nstr = malloc (1);
		nstr[0] = '\0';
		return (nstr);
	}
	while (i < len)
	{
		place[i] = str[start + i];
		i++;
	}
	place[i] = '\0';
	return (place);
}

/*
int main()
{
	char str[] = "oussama mondad";
	char *str2;
	str2 = ft_substr(str, 2, 5);
	printf("%s", str2);
}
*/
