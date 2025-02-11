/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:52:42 by danavarr          #+#    #+#             */
/*   Updated: 2024/09/08 22:25:13 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void del(void *content)
{
	free(content);
}
int main(void)
{
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
	ft_lstdelone(node3, del);
//	while (head)
//	{
//		printf("%d\n", *(int *)head->content);
//		head = head->next;
//	}
	free(node);
	free(node2);
	free(node4);
	free(i);
	free(j);
	free(m);
	return (0);
}*/
