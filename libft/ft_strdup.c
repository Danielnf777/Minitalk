/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:47:58 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 15:48:37 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;
	char	*s1;
	int		len;

	len = ft_strlen(s);
	i = 0;
	s1 = (char *)s;
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*include <stdio.h>
int	main(void)
{
	char s[] = "lorem ipsum dolor sit amet";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return (0);
}*/
