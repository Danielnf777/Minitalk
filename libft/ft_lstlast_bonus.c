/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:54:40 by danavarr          #+#    #+#             */
/*   Updated: 2024/09/08 22:33:08 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    int v1 = 1;
	int v2 = 2;
	int v3 = 3;

	head->content = &v1;
    head->next = second;

    second->content = &v2;
    second->next = third;

    third->content = &v3;
    third->next = NULL;

    t_list *result = ft_lstlast(head);
    printf("el ultimo nodo tiene %d de content.\n",*(int *)result->content);

    free(head);
    free(second);
    free(third);
    return 0;
}*/
