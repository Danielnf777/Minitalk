/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:22:06 by danavarr          #+#    #+#             */
/*   Updated: 2025/02/09 20:05:21 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_store
{
	int				length;
	int				count;
	int				i;
	int				bits;
	int				flag;
	unsigned char	c;
	unsigned char	*text;
}	t_store;
void	client_handler(int sig);
void	send_length(int pid, int lenght);
void	send_string(int pid, char *str);
void	set_length(int signal, siginfo_t *info);
void	signal_handler(int signal, siginfo_t *info, void *context);
void	set_string(int signal, t_store *g_data, pid_t pid);
#endif
