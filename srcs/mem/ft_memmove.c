/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:41:57 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:54:42 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

static void	ft_bytememmove(void **ds, const void **sr, size_t *len,
																	size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src;

	dst = *(unsigned char **)ds;
	src = *(const unsigned char **)sr;
	*len -= n;
	while (n-- != 0)
		*--dst = *--src;
}

static void	ft_longmemmove(void  **ds, const void **sr, size_t *nbytes)
{
	unsigned long		*dst;
	const unsigned long	*src;
	size_t				n;

	n = ft_memaligncmp_bwd((const void *const *const)ds, sr, *nbytes, sizeof(long));
	ft_bytememmove(ds, sr, nbytes, n);
	n = *nbytes / sizeof(long);
	*nbytes &= sizeof(long) - 1;
	dst = *(unsigned long **)ds;
	src = *(const unsigned long **)sr;
	while (n-- != 0)
		*--dst = *--src;
	*(unsigned long **)ds = dst;
	*(const unsigned long **)sr = src;
}

void		*ft_memmove(void *ds, const void *sr, size_t len)
{
	void				**dst;
	const void			**src;
	size_t *const		nbytes = &len;
	void 				*tmp;

	if (len == 0 || ds == sr)
		return (ds);
	if ((size_t)(ds - sr) >= len)
		ft_memcpy(ds, sr, len);
	else
	{
		tmp = ds + len;
		dst = &tmp;
		sr += len;
		src = &sr;
		if (len >= sizeof(long))
			ft_longmemmove(dst, src, nbytes);
		if (len != 0)
			ft_bytememmove(dst, src, nbytes, len);
	}
	return (ds);
}
