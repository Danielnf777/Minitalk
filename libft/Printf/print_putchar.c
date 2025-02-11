/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 01:00:58 by danavarr          #+#    #+#             */
/*   Updated: 2024/11/02 10:41:44 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_putchar_fd(char c, int *i)
{
	if (write(1, &c, 1) == -1)
	{
		*i = -1;
		return (*i);
	}
	(*i)++;
	return (*i);
}

int	print_putstr_fd(char *s, int *i)
{
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		print_putchar_fd(*s, i);
		s++;
	}
	return (*i);
}

int	ft_lines(int n, int size, int *i)
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
		print_putchar_fd(c, i);
		cpy = cpy % size;
		size = size / 10;
	}
	return (*i);
}

int	print_putnbr_fd(int n, int *i)
{
	int		size;

	size = 1;
	if (n == -2147483648)
	{
		print_putchar_fd('-', i);
		print_putchar_fd('2', i);
		n = 147483648;
	}
	if (n < 0)
	{
		print_putchar_fd('-', i);
		n = n * -1;
	}
	ft_lines(n, size, i);
	return (*i);
}
