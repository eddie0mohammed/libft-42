/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:29:38 by medun             #+#    #+#             */
/*   Updated: 2018/10/24 15:47:54 by medun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*s;
	long	value;
	int		sign;
	int		i;

	value = (n < 0) ? -(long)n : n;
	sign = (n < 0) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((value /= 10) >= 1)
		i++;
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	value = (n < 0) ? -(long)n : n;
	while (i-- + sign)
	{
		s[i] = value % 10 + '0';
		value /= 10;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}
