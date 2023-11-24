/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:08:41 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/23 12:55:16 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*place;
	unsigned int	x;
	size_t			y;

	if (!s || !f)
		return (NULL);
	y = ft_strlen(s);
	place = malloc (y + 1);
	if (!place)
		return (NULL);
	x = 0;
	while (s[x])
	{
		place[x] = f (x, s[x]);
		x++;
	}
	place[x] = '\0';
	return (place);
}
