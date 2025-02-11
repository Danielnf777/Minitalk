/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:31:56 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:32:22 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;

	c = 77;
	if (ft_isprint(c))
		printf("%d is a printable character\n", c);
	else
		printf("%d is not a printable character\n", c);

	if (isprint(c))
		printf("%d is a printable character\n", c);
	else
		printf("%d is not a printable character\n", c);
	return (0);

	return (0);
}*/
