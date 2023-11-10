/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:36:14 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/10 20:52:57 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			word++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (word);
}

int	ft_count_alpha(char *str, char c)
{
	int	i;
	int alpha;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
		
}

int	ft_place_by_place(char *s, int x)
{
	int i = 0;
	char *place = malloc((x + 1) * sizeof(char));
	
	while (s[i] && i < x)
	{
		place[i] = s[i];
		i++;
	}
	place[i] = '\0';
	return (place);
}


char	**ft_split(char const *s, char c)
{
	int i, x, y;
	char **str = malloc(ft_count_word(s, c) * sizeof(char *));

	
		
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (str[x++] = )
	}
}