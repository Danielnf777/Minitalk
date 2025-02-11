/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:48:44 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:48:51 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	d = malloc(sizeof(char) * len + 1);
	if (d == NULL)
		return (NULL);
	while (i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*#include <stdio.h>
int	main(void)
{
	char const	s[] = "Nice place";
	printf("%s\n", ft_substr(s, 5, 5));
	//printf("%s\n", substr(s, 5, 5));
	return (0);
}*/
