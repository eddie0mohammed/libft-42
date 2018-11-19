/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 12:18:43 by medun             #+#    #+#             */
/*   Updated: 2018/10/24 17:29:22 by medun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static char	*ft_strnew(size_t size)
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

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (str);
}
