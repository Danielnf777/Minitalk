/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:34:35 by danavarr          #+#    #+#             */
/*   Updated: 2024/11/02 10:43:12 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_p(va_list args, int *i)
{
	unsigned long	admem;

	admem = va_arg(args, unsigned long);
	if (admem == 0)
		print_putstr_fd("(nil)", i);
	else
	{
		print_putstr_fd("0x", i);
		put_adress(admem, i);
	}
	return (*i);
}

int	type_s(va_list args, int *i)
{
	char	*str;

	str = va_arg(args, char *);
	print_putstr_fd(str, i);
	return (*i);
}

int	type_i_d(va_list args, int *i)
{
	int		nbr;

	nbr = va_arg(args, int);
	print_putnbr_fd(nbr, i);
	return (*i);
}
