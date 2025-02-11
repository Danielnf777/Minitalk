/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:49:56 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/14 15:47:50 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_checkset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*dest;
	char	*set1;

	i = 0;
	len = ft_strlen(s1);
	set1 = (char *)set;
	while (ft_checkset(s1[i], set1))
		i++;
	while (i < len && ft_checkset(s1[len - 1], set1))
		len--;
	dest = malloc(sizeof(char) * (len - i + 1));
	if (dest == NULL)
		return (NULL);
	if (i == len)
	{
		dest[0] = '\0';
		return (dest);
	}
	ft_strlcpy(dest, &s1[i], len - i + 1);
	return (dest);
}
/*int	main(void)
{
	char	s1[] = "Tns9ih55555e paradise is bluste";
	char	set[] = "Testing";
//	char	set[] = "ABCMUNDO";
//	char	s1[] = "";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
