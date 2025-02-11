/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:39:49 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:40:11 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>
int     main(void)
{
        int     i;
        char    b[] = "The House is The number 43";

        i = 0;
        
	ft_tolower(b[i]);
        while (b[i] != '\0')
        {
                printf("%c", ft_tolower(b[i]));
                i++;
        }
        return (0);
}*/
