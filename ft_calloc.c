/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:05:45 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/22 16:00:46 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*place;
	size_t	i;

	if (count * size > SIZE_MAX)
		return (NULL);
	place = malloc (count * size);
	if (place == 0)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		place[i] = 0;
		i++;
	}
	return (place);
}
//malloc + bzero
//////