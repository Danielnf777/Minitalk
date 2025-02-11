/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front__bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:51:39 by danavarr          #+#    #+#             */
/*   Updated: 2024/09/08 22:10:12 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*node1 = ft_lstnew("hola");
	t_list	*lst = node1;
	t_list	*new = ft_lstnew("nuevo hola");
	ft_lstadd_front(&lst, new);
	printf("%s \n", (char *)lst->content);
	free(new);
}*/
