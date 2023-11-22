/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:23:02 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/22 15:54:50 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst == NULL)
		return ;
	last_node = ft_lstlast(*lst);
	if (*lst)
		last_node -> next = new;
	else
		*lst = new;
}

/*
int main ()
{
	t_list **head;
	t_list *node1 = (t_list *)malloc (sizeof(t_list));
	t_list *node2 = (t_list *)malloc (sizeof(t_list));
	t_list *node3 = (t_list *)malloc (sizeof(t_list));
	t_list *node4 = (t_list *)malloc (sizeof(t_list));
	t_list *new = (t_list *)malloc (sizeof(t_list));
	t_list *last;
	
	head = &node1;
	node1 -> content = "oussama";
	node1 -> next = node2;

	node2 -> content = "Mondad";
	node2 -> next = node3;

	node3 -> content = "the";
	node3 -> next = node4;

	node4 -> content = "best";
	node4 -> next = NULL;

	new -> content = "she is the last part";
	new -> next = NULL;

	ft_lstadd_back(head,new);
	last = ft_lstlast(*head);
	printf ("%s", last -> content);
	return (0);
}
*/
