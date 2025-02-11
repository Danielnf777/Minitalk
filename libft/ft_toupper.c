/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:37:10 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:37:36 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*#include <stdio.h>
int     main(void)
{
        int     i;
        int     c;
        char    b[] = "The House is The number 43";

        i = 0;
        c = 'f';
        ft_toupper(b[i]);
        while (b[i] != '\0')
        {
                printf("%c\n", ft_toupper(b[i]));
                i++;
        }
	printf("%c", ft_toupper(c));
        return (0);
}*/
