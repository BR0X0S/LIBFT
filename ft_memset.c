/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:29:45 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/06 18:12:29 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*array;

	i = 0;
	x = (unsigned char) c;
	array = (unsigned char *) b;
	while (i < len)
	{
		array[i] = x;
		i++;
	}
	return (array);
}
