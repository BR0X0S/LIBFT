/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:42:55 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/26 20:18:27 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (n == 0)
		return (d);
	if (!s && !d)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int main()
// {
// 	t_list lst;
// 	int a = 5;
// 	lst.content = &a;
// 	lst.next = NULL;
	
// 	t_list *lst2 = malloc(sizeof(t_list));
// 	lst2->content = malloc(sizeof(int *));
// 	ft_memcpy(lst2, &lst, sizeof(t_list));
// 	printf("%d", *(int *)lst2->content);
// 	//printf("l1 = %p\nl2 = %p", lst.content, lst2->content);
// }
/*
int main()
{
	int a[] = {1, 2, 3, 4};
	int b[4];
	ft_memcpy(b, a, 4 * 2);
	printf("%d\n%d", b[0], b[1]);
}
*/
