/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:40:45 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 16:39:55 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	ch = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <string.h>

#include <stdio.h>
int	main(void)
{
	char	test[] = "teste";
	int	c;

	c = 'e';
	printf("%p\n", ft_strchr(test, c));
	printf("%p", strchr(test, c));

	return (0);
}*/
