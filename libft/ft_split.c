/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:14:50 by danavarr          #+#    #+#             */
/*   Updated: 2024/11/18 14:32:40 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

int	ft_characters(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i + j] != '\0')
	{
		if (s[i + j] == c)
			j++;
		while (s[i + j] != '\0' && s[i + j] != c)
		{
			i++;
			if (s[i + j] == c || s[i + j] == '\0')
				return (i);
		}
	}
	return (i);
}

void	*nullmemory(char **dest, int i)
{
	while (i >= 0)
	{
		free(dest[i]);
		dest[i] = NULL;
		i--;
	}
	free(dest);
	dest = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**dest;

	i = 0;
	dest = (char **)malloc(sizeof (char *) * (ft_count(s, c) + 1));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			dest[i] = ft_substr(s, 0, ft_characters(s, c));
			if (dest[i] == NULL)
				return (nullmemory(dest, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	dest[i] = NULL;
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	char	**result;

	i = 0;
	result = ft_split("hello!zzzzzzzz", 'z');
//	int i;

	//	i = 0;
	//	while (result[i] != NULL)
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
