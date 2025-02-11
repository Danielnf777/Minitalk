/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:34:23 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:34:32 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*value;

	value = s;
	i = 0;
	while (i < n)
	{
		value[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	char	s[5] = "Hello";

	i = 0;
	ft_bzero(s, 3);
	while (i < 5)
	{
		printf("%c", s[i]);
		i++;
	}
	return (0);
}*/
