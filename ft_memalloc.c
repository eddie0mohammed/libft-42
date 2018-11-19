/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:22:39 by medun             #+#    #+#             */
/*   Updated: 2018/10/24 17:12:41 by medun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		*((char*)s) = 0;
		s++;
		i++;
	}
}

void		*ft_memalloc(size_t size)
{
	void *memory;

	memory = malloc(size);
	if (!memory)
		return (NULL);
	else
	{
		ft_bzero(memory, size);
		return (memory);
	}
}
