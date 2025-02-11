/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:29:31 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:29:59 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	char str[] = "Thats a8";

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			printf("%c is an digital character.\n", str[i]);
		else
			printf("%c is not an digital character.\n", str[i]);
		i++;
	}

	return(0);
}*/
