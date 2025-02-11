/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:51:07 by danavarr          #+#    #+#             */
/*   Updated: 2024/09/09 00:55:56 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
/*
int main(void)
{
	t_list	*head;
	t_list	*node;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*new;
	int	i;
	int	j;
	int	l;
	int	m;
	int	n;

	n = 50;
	i = 5;
	j = 10;
	l = 15;
	m = 20;

	node = ft_lstnew(&i);
	if (!node)
		return (1);
	node2 = ft_lstnew(&j);
	if (!node2)
		return(1);
	node3 = ft_lstnew(&l);
	if (!node3)
		return (1);
	node4 = ft_lstnew(&m);
	if (!node4)
		return (1);
	new = ft_lstnew(&n);
	
 	head = node;
	node->next = node2;
	node2->next = node3;
	node3->next = node4;
	ft_lstadd_back(&head, new);
	while (head)
	{
		printf("%d\n", *(int *)head->content);
		head = head->next;

	}
	return (0);
}*/	
