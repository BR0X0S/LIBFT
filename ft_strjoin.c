/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:41:05 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/07 20:22:39 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	size_t	d;

	i = 0;
	d = ft_strlen(dest);
	while (src[i])
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*result;
	size_t	one;
	size_t	two;

	if (!s1 || !s2)
		return (NULL);
	one = ft_strlen(s1);
	two = ft_strlen(s2);
	str1 = (char *)s1;
	str2 = (char *)s2;
	result = malloc (one + two + 1);
	if (!result)
		return (NULL);
	ft_strcat(result, str1);
	ft_strcat(result, str2);
	return (result);
}
