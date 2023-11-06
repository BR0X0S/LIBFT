/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:05:45 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/06 18:11:30 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*place;
	size_t	i;

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
