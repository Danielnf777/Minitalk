/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:33:58 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:34:03 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*value;

	value = s;
	i = 0;
	while (i < n)
	{
		value[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
  int	main(void)
  {
  char	s[5];

  ft_memset(s, 'j', 5);
  printf("%s", s);
  return (0);
  }*/
