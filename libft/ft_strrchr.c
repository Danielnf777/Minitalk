/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:41:19 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 16:41:24 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		l;
	char	ch;

	ch = c;
	str = (char *)s;
	l = ft_strlen(s);
	if (ch == '\0')
		return (&str[l]);
	while (l > 0)
	{
		if (str[l - 1] == ch)
			return (&str[l - 1]);
		l--;
	}
	return (NULL);
}
/*#include <string.h>

#include <stdio.h>
int	main(void)
{
	char	test[] = "The freespirit";
	int	c;

	c = 'e';
	printf("%p\n", ft_strrchr(test, c));
	printf("%p", strrchr(test, c));
	return (0);
}*/
