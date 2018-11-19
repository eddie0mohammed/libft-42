/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 15:02:03 by medun             #+#    #+#             */
/*   Updated: 2018/10/25 18:09:05 by medun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack, \
		const char *needle, size_t len)
{
	char	*found;
	size_t	val[3];

	val[0] = 0;
	val[1] = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[val[1]] != '\0' && val[1] < len)
	{
		val[2] = val[1];
		while (needle[val[0]] == haystack[val[2]] && val[0] + val[1] < len)
		{
			if (needle[val[0] + 1] == '\0')
			{
				found = (char *)&haystack[val[1]];
				return (found);
			}
			val[0]++;
			val[2]++;
		}
		val[0] = 0;
		val[1]++;
	}
	return (NULL);
}
