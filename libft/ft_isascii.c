/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:31:12 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:31:37 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 128;	
	if (ft_isascii(c))
		printf("%d is a ascii character\n", c);
	else
		printf("%d is not an ascii character\n", c);

	if (isascii(c))
                printf("%d is a ascii character", c);
	else
                printf("%d is not an ascii character", c);

}*/
