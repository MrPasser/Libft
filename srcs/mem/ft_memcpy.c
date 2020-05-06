/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:12:30 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:54:25 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

static void	ft_bytememcpy(const void **ds, const void **sr, size_t *nbytes,
																	size_t n)
{
	unsigned char		*dst;
	const unsigned char *src;

	dst = *(unsigned char **)ds;
	src = *(const unsigned char **)sr;
	*nbytes -= n;
	while (n-- != 0)
		*dst++ = *src++;
	*(unsigned char **)ds = dst;
	*(const unsigned char **)sr = src;
}

static void	ft_8longmemcpy(const void **ds, const void **sr, size_t *nbytes)
{
	void		*dst;
	const void	*src;
	size_t		n;

	n = ft_memaligncmp((const void **)ds, sr, *nbytes, sizeof(long));
	ft_bytememcpy(ds, sr, nbytes, n);
	n = *nbytes / (sizeof(long) * 8);
	dst = *(void **)ds;
	src = *(const void **)sr;
	while (n-- != 0)
	{
		((uintptr_t *)dst)[0] = ((uintptr_t *)src)[0];
		((uintptr_t *)dst)[1] = ((uintptr_t *)src)[1];
		((uintptr_t *)dst)[2] = ((uintptr_t *)src)[2];
		((uintptr_t *)dst)[3] = ((uintptr_t *)src)[3];
		((uintptr_t *)dst)[4] = ((uintptr_t *)src)[4];
		((uintptr_t *)dst)[5] = ((uintptr_t *)src)[5];
		((uintptr_t *)dst)[6] = ((uintptr_t *)src)[6];
		((uintptr_t *)dst)[7] = ((uintptr_t *)src)[7];
		dst += 8 * sizeof(long);
		src += 8 * sizeof(long);
	}
	*(void **)ds = dst;
	*(const void **)sr = src;
	*nbytes &= sizeof(long) * 8 - 1;
}

static void	ft_longmemcpy(const void **ds, const void **sr, size_t *nbytes)
{
	unsigned long		*dst;
	const unsigned long	*src;
	size_t				n;

	n = ft_memaligncmp((const void **)ds, sr, *nbytes, sizeof(long));
	ft_bytememcpy(ds, sr, nbytes, n);
	n = *nbytes / sizeof(long);
	*nbytes &= sizeof(long) - 1;
	dst = *(unsigned long **)ds;
	src = *(const unsigned long **)sr;
	while (n-- != 0)
		*dst++ = *src++;
	*(unsigned long **)ds = dst;
	*(const unsigned long **)sr = src;
}

void		*ft_memcpy(void *ds, const void *sr, size_t n)
{
	const void *const	tmp = ds;
	const void			**dst = (const void **)&tmp;
	const void			**src = &sr;
	size_t *const		nbytes = &n;

	if (n == 0 || ds == sr)
		return (ds);
	if (n >= 8 * sizeof(long))
		ft_8longmemcpy(dst, src, nbytes);
	if (n >= sizeof(long))
		ft_longmemcpy(dst, src, nbytes);
	if (n != 0)
		ft_bytememcpy(dst, src, nbytes, n);
	return (ds);
}
