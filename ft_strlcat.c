/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:09:30 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/06 18:31:48 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		src_len;
	int		dest_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dst[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	if (dest_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && i < dstsize - len_src - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '/0';
	return (dest_len + len_src);
}
