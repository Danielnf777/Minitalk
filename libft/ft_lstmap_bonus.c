/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:33:19 by danavarr          #+#    #+#             */
/*   Updated: 2024/09/09 01:08:36 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	head = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		if (!new_lst->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		new_lst = new_lst->next;
	}
	return (head);
}
/*
void del(void *content)
{
	free(content);
}

void *f(void *content)
{
	int	*newcontent;

	newcontent = malloc(sizeof(int));
	if (!newcontent)
		return (NULL);
	*newcontent = *(int *)content + 10;
	return (newcontent);
}

#include <stdio.h>
int main(void)
{
	t_list	*newlst;
	t_list	*print_newlst;
	t_list	*head;
	t_list	*node;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	int	*i;
	int	*j;
	int	*l;
	int	*m;

	i = malloc(sizeof(int));
	j = malloc(sizeof(int));
	l = malloc(sizeof(int));
	m = malloc(sizeof(int));

	*i = 5;
	*j = 10;
	*l = 15;
	*m = 20;

	node = ft_lstnew(i);
	if (!node)
		return (1);
	node2 = ft_lstnew(j);
	if (!node2)
		return(1);
	node3 = ft_lstnew(l);
	if (!node3)
		return (1);
	node4 = ft_lstnew(m);
	if (!node4)
		return (1);
 	head = node;
	node->next = node2;
	node2->next = node3;
	node3->next = node4;
	newlst = ft_lstmap(head, f, del);
	print_newlst = newlst;
	while (print_newlst)
	{
		printf("%d\n", *(int *)print_newlst->content);
		print_newlst = print_newlst->next;
	}
	ft_lstclear(&head, del);
	ft_lstclear(&newlst, del);
	return (0);
}

#include <string.h>
int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));
	t_list *new_list;

	head->content = malloc(sizeof(char) + 5);    
	head->next = second;
    second->content = malloc(sizeof(char) + 5);
    second->next = third;
    third->content = malloc(sizeof(char) + 5);
    
	strcpy(head->content, "a");
	strcpy(second->content, "b");
	strcpy(third->content, "c");

	printf("Contenido del primer nodo: %c \n", *(char *)head->content);
	printf("Contenido del segundo nodo: %c \n", *(char *)second->content);
	printf("Contenido del tercer nodo: %c \n", *(char *)third->content);

	new_list = ft_lstmap(head, f, del);
	t_list *curent = new_list;

	printf("------------------------------\n");
	printf("Contenido del primer nodo: %s \n", (char *)curent->content);
	curent = curent->next;
	printf("Contenido del segundo nodo: %s \n", (char *)curent->content);
	curent = curent->next;
	printf("Contenido del tercer nodo: %s \n", (char *)curent->content);
	ft_lstclear(&new_list, del);
	ft_lstclear(&head, del);

	return (0);
}*/
