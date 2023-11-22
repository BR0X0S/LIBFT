/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:29:45 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/22 20:44:30 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*str;

	i = 0;
	x = (unsigned char) c;
	str = (unsigned char *) b;
	while (i < len)
	{
		str[i] = x;
		i++;
	}
	return (str);
}
