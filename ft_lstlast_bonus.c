/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:58:04 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/21 20:28:54 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*
int main ()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;
	t_list *last;
	
	node1 = (t_list *)malloc (sizeof(t_list));
	node2 = (t_list *)malloc (sizeof(t_list));
	node3 = (t_list *)malloc (sizeof(t_list));
	node4 = (t_list *)malloc (sizeof(t_list));
	
	head = node1;
	node1 -> content = "oussama";
	node1 -> next = node2;

	node2 -> content = "Mondad";
	node2 -> next = node3;

	node3 -> content = "the";
	node3 -> next = node4;

	node4 -> content = "best one ever";
	node4 -> next = NULL;
	
	last = ft_lstlast(head);

	printf("%s\n", last -> content);
	
	return (0);
}
*/
