/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:59:22 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/24 17:46:34 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[x])
	{
		y = 0;
		while (haystack[x] == needle[y] && haystack[x] && x < len)
		{
			y++;
			x++;
		}
		if (!needle[y])
			return ((char *)&haystack[x - y]);
		x = (x - y) + 1;
	}
	return (NULL);
}
