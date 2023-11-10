/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:17:09 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/10 15:43:17 by oumondad         ###   ########.fr       */
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
		return(NULL);
	str = (char *)s1;
	start = 0;
	stop = ft_strlen(str) - 1;
	while (str[start] && ft_checkset((char *)set, str[start]))
		start++;
	while (str[start] && ft_checkset((char *)set, str[stop]))
		stop--;
	if (start > stop)
		return (ft_substr(str, start, 0));
	return (ft_substr(str, start, (stop - start) + 1));
}
