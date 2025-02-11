/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 23:49:02 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:55:39 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

void	my_function(unsigned int i, char *s)
{
	if (i % 2 == 0)
		*s = ft_tolower(*s);
}

int	main(void)
{
	char s[] = "Turn to LOOK, Slowly...";
	ft_striteri(s, my_function);
	printf("%s\n", s);
	return (0);
}*/		
