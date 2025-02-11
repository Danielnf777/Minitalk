/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:10:47 by danavarr          #+#    #+#             */
/*   Updated: 2024/11/02 10:42:20 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_adress(unsigned long admem, int *i)
{
	unsigned long long	rest;

	if (admem > 15)
		put_adress((admem / 16), i);
	rest = admem % 16;
	if (rest < 10)
		print_putchar_fd(rest + '0', i);
	else
		print_putchar_fd(rest - 10 + 'a', i);
	return (*i);
}

int	putcapital(unsigned int nbr, int *i)
{
	int	rest;

	if (nbr > 15)
		putcapital((nbr / 16), i);
	rest = nbr % 16;
	if (rest < 10)
		print_putchar_fd(rest + '0', i);
	else
		print_putchar_fd(rest - 10 + 'A', i);
	return (*i);
}

int	puthexa(unsigned int nbr, int *i)
{
	int	rest;

	if (nbr > 15)
		puthexa((nbr / 16), i);
	rest = nbr % 16;
	if (rest < 10)
		print_putchar_fd(rest + '0', i);
	else
		print_putchar_fd(rest - 10 + 'a', i);
	return (*i);
}

int	putnbr_un(unsigned int nb, int *i)
{
	if (nb > 9)
		putnbr_un(nb / 10, i);
	print_putchar_fd(nb % 10 + '0', i);
	return (*i);
}

/*void	adress(unsigned long long admem)
{
	int res;
	
	while (admem > 0)
	{
		if (admem > 15)
			adress(n / 16);
		res = admem % 16;
		if (admem < 10)
			ft_putchar_fd(n % 16 + '0', 1);	
		ft_putchar_fd(n % 16 + '0' - 'a', 1);
	}*/
