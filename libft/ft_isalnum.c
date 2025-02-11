/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:30:28 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 15:06:10 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}
/*#include<stdio.h>
int	main(void)
{
	char	c[] = "house4@";
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if ((ft_isalnum)(c[i]))
			printf("%c is an alphanumeric character\n", c[i]);
		else
			printf("%c is not an alphanumeric charcater\n", c[i]);
		i++;
	}
}*/
