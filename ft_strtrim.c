/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 21:46:41 by medun             #+#    #+#             */
/*   Updated: 2018/10/23 19:22:47 by medun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char		*ft_strnew(size_t size)
{
	char	*out;
	size_t	i;

	i = 0;
	out = (char*)malloc(sizeof(*out) * size + 1);
	if (!out)
		return (NULL);
	while (i <= size)
		out[i++] = '\0';
	return (out);
}

static int		space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	int		sback;
	int		i;
	char	*out;

	sback = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (space(*s))
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	while (space(s[i--]))
		sback++;
	out = ft_strnew(ft_strlen(s) - sback);
	if (!out)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s) - sback)
	{
		out[i] = s[i];
		i++;
	}
	return (out);
}
