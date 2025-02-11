/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:16:06 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/15 21:36:15 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	s1 = (char *)s;
	i = 0;
	s1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (s1 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = (*f)(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*#include <stdio.h>
char	ft_uptodown(unsigned int i, char c)
{
		if (i % 2 == 0 && c >= 'a' && c <= 'z')
			c = c - 32;
	return (c);
}

int	main(void)
{
	char	s[] = "Look...have you seen?";
	printf("%s\n", ft_strmapi(s, ft_uptodown));
	return (0);
}*/
