/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:43:40 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/15 23:35:25 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while ((i + j) < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	big[] = "The blue house";
	char	little[] = "blue";
	size_t	len;

	len = 2;
	printf("%p\n", ft_strnstr(big, little, len));
 	printf("%p\n", strnstr(big, little, len));
	printf("%p\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%p\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
