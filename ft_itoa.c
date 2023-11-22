/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:43:15 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/22 20:21:01 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_lent(long int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		nbr *= (-1);
		i++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int long	nbr;
	char		*place;
	int			i;

	nbr = n;
	i = ft_nbr_lent(nbr);
	place = malloc ((i + 1) * sizeof(char));
	if (!place)
		return (NULL);
	place[i] = '\0';
	if (nbr == 0)
		place[0] = '0';
	if (nbr < 0)
	{
		place[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
	{
		i--;
		place[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (place);
}

/*
int main(void)
{
	int b = -2147483648;
	char *s = ft_itoa(b);
	printf("%s\n", s);
}
*/