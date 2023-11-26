/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:09:30 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/25 16:20:26 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (!dst && !dstsize)
		return (slen);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
