/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:33 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/14 14:58:06 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*ss;

	i = 0;
	x = (unsigned char)c;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (((unsigned char *)ss)[i] == x)
			return ((unsigned char *)&ss[i]);
		i++;
	}
	return ((void *)0);
}
