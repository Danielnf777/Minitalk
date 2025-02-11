/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:42:36 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 17:28:07 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;
	unsigned char	ch;

	ch = c;
	new = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (new[i] == ch)
			return (&new[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	s[7] = {-49, 49, 1, -1, 0, -2, 2};

//	char	s[13] = "M-^?M-^?M-^?1";
//	int	c = 'M';
	printf("%pu\n", ft_memchr(s, -1, 7));
	printf("%pu\n", memchr(s, -1, 7));
	return (0);
}*/
