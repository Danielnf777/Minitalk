/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:57:03 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/11 12:57:14 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lines(int n, int size, int fd)
{
	int		cpy;
	char	c;

	cpy = n;
	while (n > 9)
	{
		n = n / 10;
		size = size * 10;
	}
	while (size > 0)
	{
		c = cpy / size + 48;
		ft_putchar_fd(c, fd);
		cpy = cpy % size;
		size = size / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		size;

	size = 1;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	ft_lines(n, size, fd);
}
/*int main(void)
{
	int	n;
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/
