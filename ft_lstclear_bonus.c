/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:55:15 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/22 20:23:24 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = *lst;
		del ((*lst)-> content);
		*lst = (*lst)-> next;
		free (tmp);
	}
	temp = NULL;
}
/*
void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", *(int *)(lst -> content));
		lst = lst -> next;
	}
}

int main()
{
	t_list *node[9];
	t_list *head = NULL;
	int i = 0;
	
	int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	
	while (i < 10)
	{
		node[i] = ft_lstnew(arry + i);
		ft_lstadd_back(&head, node[i]);
		i++;
	}
	print_list(head);
}
*/
