/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:36:14 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/12 20:37:01 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *str, char sep)
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

int	ft_count_alpha(char const *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep)
		i++;
	return (i);
}

char	*ft_place_on_it(char const *str, int x)
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
