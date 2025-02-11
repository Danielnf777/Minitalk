/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:01:27 by danavarr          #+#    #+#             */
/*   Updated: 2025/02/09 19:09:19 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../minitalk.h"
#include <string.h>

void	client_handler(int sig)
{
	if (sig == SIGUSR1)
	{
		ft_printf("Acknowledgment received from server!\n");
	}
}

void	send_length(int pid, int lenght)
{
	int	i;

	i = 31;
	while (i >= 0)
	{
		if (lenght >> i & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		pause();
	}
}

void	send_string(int pid, char *str)
{
	int	i;

	while (*str)
	{
		i = 7;
		while (i >= 0)
		{
			if (*str >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			i--;
			pause();
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	int					pid;
	int					len;
	struct sigaction	sa;
	char				*str;

	sa.sa_flags = 0;
	sa.sa_handler = client_handler;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	str = av[2];
	if (ac != 3)
	{
		printf("Error: Usage: ./client <pid> <string>\n");
		return (1);
	}
	pid = ft_atoi(av[1]);
	len = ft_strlen(av[2]);
	send_length(pid, len);
	send_string(pid, av[2]);
	return (0);
}
