/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:33:32 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/21 20:28:24 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del == NULL)
		return ;
	if (lst != NULL)
	{
		del (lst -> content);
		free (lst);
	}
}

/*
void delet_content(void *content)
{
	free(content);
}
int main ()
{
	t_list *head;
	t_list *node1 = (t_list *)malloc (sizeof(t_list));
	t_list *node2 = (t_list *)malloc (sizeof(t_list));
	t_list *node3 = (t_list *)malloc (sizeof(t_list));
	t_list *node4 = (t_list *)malloc (sizeof(t_list));
	t_list *last;
	
	head = node1;
	node1 -> content = "oussama";
	node1 -> next = node2;

	node2 -> content = "Mondad";
	node2 -> next = node3;

	node3 -> content = "the";
	node3 -> next = node4;

	node4 -> content = strdup("best one ever");
	node4 -> next = NULL;
	
	last = ft_lstlast(head);
	printf("befor free: %s\n", last -> content);
	
	ft_lstdelone(node4,delet_content);

	last = ft_lstlast(head);
	printf("aftre free: %s\n", last -> content);
	
	return (0);
}

*/
