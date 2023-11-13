/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:41:05 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/13 18:20:38 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		x;
	int		y;

	x = 0;
	if (!s1 || !s2)
		return (NULL);
	result = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[x])
	{
		result[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y])
	{
		result[x + y] = s2[y];
		y++;
	}
	result[x + y] = '\0';
	return (result);
}
