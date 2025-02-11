/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:23:06 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:28:45 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	char str[] = "Teh hou8s";
	
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]))
			printf("%c is an alphabetic character.\n", str[i]);
		else
			printf("%c is not an alphabetic character.\n",str[i]);
		i++;
	}
}*/
