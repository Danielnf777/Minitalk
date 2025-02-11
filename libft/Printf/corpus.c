/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corpus.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 23:42:26 by danavarr          #+#    #+#             */
/*   Updated: 2024/11/02 10:37:21 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	corpus(const char *s, va_list args, int *i)
{
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
				print_putchar_fd('%', i);
			if (*s == 'c')
				print_putchar_fd(va_arg(args, int), i);
			corpus_plus(s, args, i);
		}
		else
		{
			print_putchar_fd(*s, i);
		}
		s++;
	}
	return (*i);
}

int	corpus_plus(const char *s, va_list args, int *i)
{
	if (*s == 's')
		type_s(args, i);
	if (*s == 'i' || *s == 'd')
		type_i_d(args, i);
	if (*s == 'u')
		putnbr_un(va_arg(args, unsigned int), i);
	if (*s == 'x')
		puthexa(va_arg(args, unsigned int), i);
	if (*s == 'X')
		putcapital(va_arg(args, unsigned int), i);
	if (*s == 'p')
		type_p(args, i);
	return (*i);
}
