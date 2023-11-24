/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:17:09 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/23 17:53:10 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char *set, char c)
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

	if (!s1 || !set)
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
