/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:59:22 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/14 14:59:43 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j])
		{
			if (h[i + j] == n[j] && j + i < len)
				j++;
			else
				break ;
		}
		if (n[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (0);
}
