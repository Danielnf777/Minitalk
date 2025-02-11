/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:36:27 by danavarr          #+#    #+#             */
/*   Updated: 2025/02/10 07:09:28 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static t_store	*g_data;

void	set_data(void)
{
	if (g_data)
	{
		if (g_data->text)
		{
			free(g_data->text);
			g_data->text = NULL;
		}
		free(g_data);
		g_data = NULL;
	}
	g_data = malloc(sizeof(t_store));
	if (!g_data)
		exit (1);
	g_data->bits = 8;
	g_data->flag = 0;
	g_data->count = 0;
	g_data->length = 0;
	g_data->c = 0;
	g_data->i = 0;
	g_data->text = NULL;
}

void	signal_handler(int signal, siginfo_t *info, void *context)
{
	(void)context;
	(void)info;
	set_length(signal, info);
}

void	set_string(int signal, t_store *g_data, pid_t pid )
{
	if (signal == SIGUSR1)
		g_data->c = (g_data->c << 1) | 0;
	else if (signal == SIGUSR2)
		g_data->c = (g_data->c << 1) | 1;
	g_data->bits--;
	if (!g_data->bits)
	{
		g_data->text[g_data->i] = g_data->c;
		g_data->i++;
		g_data->bits = 8;
		g_data->c = 0;
		g_data->length--;
	}
	if (g_data->length == 0)
	{
		g_data->text[g_data->i] = '\0';
		ft_printf("%s\n", g_data->text);
		g_data->flag = 1;
	}
	(void)pid;
}

void	set_length(int signal, siginfo_t *info)
{
	if (g_data && g_data->length > 1000)
		usleep(200);
	else
		usleep(100);
	if (!g_data || g_data == NULL || g_data->flag)
		set_data();
	if (g_data->count == 32)
		set_string(signal, g_data, info->si_pid);
	else
	{
		if (signal == SIGUSR1)
			g_data->length = (g_data->length << 1) | 0;
		else if (signal == SIGUSR2)
			g_data->length = (g_data->length << 1) | 1;
		g_data->count++;
		if (!g_data->text && g_data->count == 32)
		{
			g_data->text = malloc(sizeof(unsigned char) * (g_data->length + 1));
			if (!g_data->text)
				exit (1);
		}
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = signal_handler;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Here is the server PID: %d\n", getpid());
	while (1)
	{
		usleep(100);
	}
	return (0);
}
