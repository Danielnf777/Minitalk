/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:47:33 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/03 23:36:06 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mylen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = mylen(n);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	res[len] = '\0';
	while (n > 0)
	{
		res[--len] = (n % 10) + 48;
		n = n / 10;
	}
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	int	n;
	n = -2147483647;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
