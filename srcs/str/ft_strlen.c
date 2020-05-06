/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:21:05 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:58:52 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

static int	ft_testlongstrlen(const unsigned long *uls)
{
	const char			*c;
	size_t				i;
	const unsigned long	size = sizeof(long);

	c = (const char *)uls;
	i = 0;
	while (i < size)
	{
		if (c[i] == '\0')
			return (i);
		i++;
	}
	return (-1);
}

size_t		ft_strlen(const char *str)
{
	const char			*s = str;
	const unsigned long *uls;
	unsigned long		x;
	const unsigned long	rep_01 = ft_repcset(0x01);
	const unsigned long	rep_80 = ft_repcset(0x80);

	x = sizeof(size_t) - ((uintptr_t)s & (sizeof(size_t) - 1));
	while (x-- != 0)
		if (*s++ == '\0')
			return (s - str - 1);
	uls = (unsigned long *)s;
	while (1)
	{
		if (((*uls - rep_01) & ((~*uls) & rep_80)) != 0)
			if ((x = ft_testlongstrlen(uls)) != -1)
				return ((const char *)uls - str + x);
		++uls;
	}
	return (0);
}
