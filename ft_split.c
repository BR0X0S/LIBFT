/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:36:14 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/25 14:08:14 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char sep)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != sep && str[i])
			word++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (word);
}

static int	ft_count_alpha(char const *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i])
		i++;
	return (i);
}

static void	ft_free_split(char **split, int i)
{
	int		x;
	char	*place;

	x = 0;
	while (x < i)
	{
		place = split[x];
		free (place);
		x++;
	}
	free(split);
}

static char	**ft_place_it(char const *str, char sep, char **result, int words)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < words)
	{
		while (str[y] == sep && str[y])
			y++;
		result[x] = ft_substr(str, y, ft_count_alpha(&str[y], sep));
		if (!result[x])
		{
			ft_free_split(result, x);
			return (NULL);
		}
		while (str[y] != sep && str[y])
			y++;
		x++;
	}
	result[x] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_place_it (s, c, result, words);
	if (!result)
	{
		return (NULL);
	}
	return (result);
}
