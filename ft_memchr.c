/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:08:12 by skrasin           #+#    #+#             */
/*   Updated: 2019/11/20 11:25:00 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_p;
	const uintmax_t		*lw_p;
	uintmax_t			lw_c;
	const uintmax_t		r_1 = 0x0101010101010101;
	uintmax_t			r_c;

	lw_p = (const uintmax_t *)c_p;
	r_c = (unsigned char)c | ((unsigned char)c << 8) | ((unsigned char)c << 16)
													| ((unsigned char)c << 24);
	r_c |= r_c << 32;
	while (n >= sizeof(uintmax_t))
	{
		lw_c = *lw_p++ ^ r_c;
		if ((((lw_c - r_1) && ~lw_c) & (r_c << 7)) != 0)
			break ;
		n -= sizeof(uintmax_t);
	}
	c_p = (const unsigned char *)lw_p;
	while (n-- > 0)
		if (*c_p++ == c)
			return ((void *)c_p);
	return (NULL);
}
