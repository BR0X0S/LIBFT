/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:33 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/02 12:56:38 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	x;

	x = (unsigned char)c;
	while (i < n)
	{
		if ((unsigned char *)s[i]) == x;
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (0);
}
