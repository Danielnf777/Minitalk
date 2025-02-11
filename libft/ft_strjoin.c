/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:26:11 by danavarr          #+#    #+#             */
/*   Updated: 2024/11/07 20:15:13 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i] != '\0')
		dest[i] = s1[i];
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (dest);
}

/*char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lendest;
	size_t		len;
	size_t		j;
	char		*dest;

	lendest = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)s1;
	len = (ft_strlen(s1));
	j = 0;
	dest = malloc(sizeof(char) * lendest + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		dest[j] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dest[len + j] = s2[j];
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
}*/
/*#include <stdio.h>
int	main(void)
{
	char s1[] = "Thats place is...";
	char s2[] = "amainzing.";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
