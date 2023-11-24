/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:18:59 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/24 17:23:33 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*place;
	size_t	i;

	i = ft_strlen(s);
	if (start >= i)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (i - start < len)
		len = i - start;
	place = malloc (len + 1);
	if (!place)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		place[i] = s[start];
		i++;
		start++;
	}
	place[i] = '\0';
	return (place);
}
