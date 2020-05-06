/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:08:12 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:56:44 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include <sys/_types/_null.h>

static void	*ft_bytememchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;

	s = (const unsigned char *)str;
	while (n != 0 && *s != c)
	{
		++s;
		--n;
	}
	return (n ? (void *)s : NULL);
}

static void	*ft_longmemchr(const void *str, int c, size_t *l)
{
	size_t				xl;
	const unsigned long	rep_c = ft_repcset(c);
	const unsigned long rep_01 = ft_repcset(0x01);
	unsigned long		w;
	const unsigned long	*s;

	xl = (uintptr_t)str & (sizeof(size_t) - 1);
	if ((s = ft_bytememchr(str, c, xl)) != NULL)
		return ((void *)s);
	s = (const unsigned long *)((unsigned char *)str + xl);
	*l -= xl;
	xl = *l / sizeof(long);
	while (xl != 0)
	{
		w = *s ^ rep_c;
		if ((((w - rep_01) & ~w) & (rep_01 << (sizeof(long) - 1))) != 0)
			break ;
		++s;
		--xl;
	}
	*l = xl ? sizeof(long) : *l & (sizeof(long) - 1);
	return ((void *)s);
}

void		*ft_memchr(const void *str, int c, size_t n)
{
	size_t *const	nbytes = &n;

	c = (unsigned char)c;
	if (n > sizeof(long))
		str = ft_longmemchr(str, c, nbytes);
	return (n != 0 ? ft_bytememchr(str, c, n) : NULL);
}
