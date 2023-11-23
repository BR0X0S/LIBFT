/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:36:14 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/14 14:50:49 by oumondad         ###   ########.fr       */
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
	while (str[i] != sep)
		i++;
	return (i);
}

static char	*ft_place_on_it(char const *str, int x)
{
	int		i;
	char	*place;

	place = malloc((x + 1) * sizeof(char));
	if (!place)
		return (NULL);
	i = 0;
	while (str[i] && i < x)
	{
		place[i] = str[i];
		i++;
	}
	place[i] = '\0';
	return (place);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	char	**str;

	x = 0;
	y = 0;
	if (!s)
		return (NULL);
	str = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[x])
	{
		while (s[x] == c)
			x++;
		if (s[x] != c && s[x])
			str[y++] = ft_place_on_it(s + x, ft_count_alpha(s + x, c));
		while (s[x] != c && s[x])
			x++;
	}
	str[y] = 0;
	return (str);
}

/*
int main()
{
    printf("|*----------------ft_split-----------------*|\n");
	int i = 0;
	char	**ssp;
	ssp = ft_split(",,,,oussama,,,,,mondad,,nemiro,uno",',');
	while (ssp[i])
	{
		printf("%s\n",ssp[i]);
		i++;
	}
	printf("|*-----------------------------------------*|\n");
}
*/


static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(*(array + j));
		j++;
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, get_word_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}