/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:21:01 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:54:16 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

static int	ft_bytememcmp(const void **str1,
						const void **str2, size_t *nbytes, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = *(const unsigned char **)str1;
	s2 = *(const unsigned char **)str2;
	*nbytes -= n;
	while (n-- != 0)
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	return (0);
}

static int	ft_longmemcmp(const void **const str1,
									const void **const str2, size_t *nbytes)
{
	const unsigned long *s1;
	const unsigned long	*s2;
	size_t				n;

	n = *nbytes;
	ft_bytememcmp(str1, str2, nbytes, ft_memaligncmp(str1, str2, n,
																sizeof(long)));
	s1 = *(const unsigned long **const)str1;
	s2 = *(const unsigned long **const)str2;
	n /= sizeof(long);
	while (n-- != 0)
	{
		if (*s1 != *s2)
			return (ft_bytememcmp((const void **)&s1, (const void **)&s2,
														nbytes, sizeof(long)));
			++s1;
		++s2;
	}
	*str1 = s1;
	*str2 = s2;
	*nbytes &= sizeof(long) - 1;
	return (0);
}

int			ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const void **const	s1 = &str1;
	const void **const	s2 = &str2;
	size_t *const		nbytes = &n;
	unsigned int		res;

	if (n >= sizeof(long) && (res = ft_longmemcmp(s1, s2, nbytes)) != 0)
		return (res);
	if (n != 0 && (res = ft_bytememcmp(s1, s2, nbytes, n) != 0))
		return (res);
	return (0);
}
