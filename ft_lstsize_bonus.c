/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:53:43 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/22 20:28:51 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst -> next;	
	}
	return (i);
}

/*
int main ()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;
	int i;
	
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

	node4 -> content = "best";
	node4 -> next = NULL;
	
	i = ft_lstsize(head);

	printf("%d\n", i);
	
	return (0);
}
*/
