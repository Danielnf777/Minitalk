/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:27:25 by danavarr          #+#    #+#             */
/*   Updated: 2024/09/08 22:39:17 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	my_function(void *content)
{
	char str[] = "hola";
	size_t len = ft_strlen(str);
	char *dest = ft_strdup(str);
	strcpy(dest, str);
	strcpy((char *)content, dest);
}

int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

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

	ft_lstiter(head, my_function);

	printf("------------------------------\n");
	printf("Contenido del primer nodo: %s \n", (char *)head->content);
	printf("Contenido del segundo nodo: %s \n", (char *)second->content);
	printf("Contenido del tercer nodo: %s \n", (char *)third->content);

	return (0);
}*/
