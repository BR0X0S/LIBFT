#include "libft.h"

// void print_list_ar9am(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%zu\n", *(size_t *)(lst -> content));
// 		lst = lst -> next;
// 	}
// }
// void print_list(t_list *lst)
// {
// 		while (lst)
// 	{
// 		printf("%s\n", (char *)(lst -> content));
// 		lst = lst -> next;
// 	}
// }
// void del (void *content)
// {
// 	free (content);
// }

// void	*l7sab_sabon(void *content)
// {
// 	char *str = (char *)content;
// 	size_t *i = malloc (1 * sizeof(size_t));
// 	*i = ft_strlen(str);
// 	//printf("l7ssab sabon -> %zu\n", *i);
// 	return ((void *)i);
// }

// int main ()
// {
// 	int i = 0;
// 	char strs[10][10] = {"oussama", "howa", "likayn", "wmakayn", "ma7sen"};

// 	t_list *node;
// 	t_list *list;

// 	list = NULL;

// 	while (i < 5)
// 	{
// 		node = ft_lstnew(ft_strdup(strs[i]));
// 		ft_lstadd_back(&list, node);
// 		node = node -> next;
// 		i++;
// 	}

// 	print_list(list);
// 	t_list *new_list = ft_lstmap(list, l7sab_sabon, del);
// 	print_list_ar9am(new_list);
// }

void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst -> content);
		lst = lst -> next;
	}
}



int main()
{
	char strs[10][10] = {"oussama", "howa", "likayn", "wmakayn", "ma7sen"};
	int i = 0;
	t_list  *node;
	t_list  *head;
	head = NULL;

	while (i < 5)
	{
		node = ft_lstnew(ft_strdup(strs[i]));
		ft_lstadd_back(&head, node);
		node = node -> next;
		i++;
	}
	t_list *node2;
	t_list *head2;

	head2 = NULL;
	int j = 0;
	while (j < 5)
	{
		node2 = ft_lstnew(strs[j]);
		ft_lstadd_front(&head2, node2);
		node2 = node2 -> next;
		j++;
	}
	print_list(head2);
	printf("\n----------\n");
	print_list(head);

}

