/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:17:09 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/12 20:40:05 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkset(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	stop;
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)s1;
	start = 0;
	stop = ft_strlen(str) - 1;
	while (str[start] && ft_checkset((char *)set, str[start]))
		start++;
	while (stop > 0 && ft_checkset((char *)set, str[stop]))
		stop--;
	if (start > stop)
		return (ft_substr(str, start, 0));
	return (ft_substr(str, start, (stop - start) + 1));
}


static int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	start;
	size_t	end;

	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	if (start >= len)
		return ((char *)ft_calloc(1, sizeof(char)));
	end = len - 1;
	while (s1[end] && ft_check(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	len = end - start + 1;
	end = 0;
	while (end < len)
		str[end++] = s1[start++];
	str[end] = '\0';
	return (str);
}
