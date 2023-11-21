/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:04:55 by oumondad          #+#    #+#             */
/*   Updated: 2023/11/21 20:06:31 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del(void *content)
{
	free(content);
}

void deleteNode(t_list **head, int index)
{
	t_list *temp = *head;
	int i = 1;

	if (index == 1)
	{
		*head = temp->next;
		ft_lstdelone(temp, del);
		return;
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return;

	t_list *next_node = temp->next->next;
	ft_lstdelone(temp->next, del);
	temp->next = next_node;
}
void delete (t_list **head, int index)
{
	t_list *temp = *head;
	int i  = 1;
	if (index == 1)
	{
		*head = temp->next;
		ft_lstdelone(temp, del);
		return ;
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp || temp->next == NULL)
		return;
	t_list *n_node = temp->next->next;
	ft_lstdelone(temp->next, del);
	temp->next = n_node;
}
void print_list(t_list *lst)
{
	while(lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

int main()
{
	int i = 0;
	char arr[10][10] = {"one", "two", "three", "four", "five"};
	t_list *list;
	t_list *node;

	list  = NULL;
	while(i < 6)
	{
		node = ft_lstnew(ft_strdup(arr[i]));
		ft_lstadd_back(&list, node);
		i++;
		node = node->next;
	}
	//node = NULL;
	delete(&list, 1);
	print_list (list);

}
*/


void plus_one(void *content)
{
	*(int *)content = *(int *)content + 1;
}
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
    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	t_list *node[10];
	t_list *head = NULL;
	int i = 0;
	
	while (i < 10)
	{
        //int *data = malloc(sizeof(int));
       // *data = arry[i];
        
		node[i] = ft_lstnew(&arry[0] + i);
		ft_lstadd_back(&head, node[i]);
		i++;
	}
	print_list(head);
	ft_lstiter(head ,plus_one);
	printf("----------\n");
	print_list(head);
    
    // while (head)
	// {
	// 	t_list *temp = head;
	// 	head = head->next;
	// 	free(temp->content);
	// 	free(temp);
	// }
    return (0);
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