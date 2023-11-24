/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:59:22 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/23 14:44:01 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	if (!n || !len)
		return (NULL);
	if (n[0] == '\0')
		return (h);
	while (*h && len)
	{
		j = 0;
		while (h[j] == n[j] && j < len && h[j])
			j++;
		if (!n[j])
			return (h);
		len--;
		h++;
	}
	return (0);
}
