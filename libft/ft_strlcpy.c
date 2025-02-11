/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:36:09 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:36:15 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	dst[10];
//	char src[] = "The paradise is  blue";

	//ft_strlcpy(dest, "lorem ipsum dolor sit amet", 1);
	//strlcpy(dest, "lorem ipsum dolor sit amet", 1);

	printf("%zu\n", ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0));
       printf("%zu",strlcpy(dst, "lorem ipsum dolor sit amet", 0));

	return (0);
}*/
