/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:43:05 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:43:15 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new1;
	unsigned char	*new2;
	size_t			i;

	new1 = (unsigned char *)s1;
	new2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (new1[i] != new2[i])
			return (new1[i] - new2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "What' you doing!";
	char	s2[] = "Whb's upp!!";

	printf("%i\n", ft_memcmp(s1, s2, 5));
	printf("%i\n", memcmp(s1, s2, 5));
	return (0);
}*/
