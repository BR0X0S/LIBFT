/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:18:59 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/24 16:37:40 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*place;
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	place = malloc ((len + 1) * sizeof(char));
	if (!place)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(str))
		return ((char *)ft_calloc(1, sizeof(char)));
	while (i < len)
	{
		place[i] = str[start + i];
		i++;
	}
	place[i] = '\0';
	return (place);
}
