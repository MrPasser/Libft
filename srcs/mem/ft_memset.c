/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:21:07 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:55:00 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

static void	*ft_bytememset(void *d, int c, size_t len)
{
	unsigned char *dst;

	dst = d;
	while (len-- != 0)
		*dst++ = c;
	return (dst);
}

static void	*ft_longalignmemset(void *dst, int c, size_t *l)
{
	const size_t xl = (uintptr_t)dst & (sizeof(size_t) - 1);

	*l -= xl;
	return (ft_bytememset(dst, c, xl));
}

static void	*ft_longmemset(void *dst, int c, size_t *l)
{
	size_t				xl;
	const unsigned long	rep_c = ft_repcset(c);

	dst = ft_longalignmemset(dst, c, l);
	xl = *l / (sizeof(long) * 8);
	while (xl-- != 0)
	{
		((uintptr_t *)dst)[0] = rep_c;
		((uintptr_t *)dst)[1] = rep_c;
		((uintptr_t *)dst)[2] = rep_c;
		((uintptr_t *)dst)[3] = rep_c;
		((uintptr_t *)dst)[4] = rep_c;
		((uintptr_t *)dst)[5] = rep_c;
		((uintptr_t *)dst)[6] = rep_c;
		((uintptr_t *)dst)[7] = rep_c;
		dst += 8 * sizeof(long);
	}
	xl = (*l & (sizeof(long) * 8 - 1)) / sizeof(long);
	while (xl-- != 0)
	{
		((uintptr_t *)dst)[0] = rep_c;
		dst += sizeof(long);
	}
	*l &= sizeof(long) - 1;
	return (dst);
}

void		*ft_memset(void *b, int c, size_t len)
{
	void			*dst;
	size_t *const	nbytes = &len;

	dst = b;
	c = (unsigned char)c;
	if (len >= sizeof(long))
		dst = ft_longmemset(dst, c, nbytes);
	if (len != 0)
		dst = ft_bytememset(dst, c, len);
	return (b);
}
