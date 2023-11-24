/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:33:03 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/24 16:34:39 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	node = ft_lstnew(f(lst -> content));
	if (!node)
		return (NULL);
	new_list = node;
	lst = lst -> next;
	while (lst != NULL)
	{
		node -> next = ft_lstnew(f(lst -> content));
		if (!node)
			ft_lstclear(&new_list, del);
		node = node -> next;
		lst = lst -> next;
	}
	return (new_list);
}
