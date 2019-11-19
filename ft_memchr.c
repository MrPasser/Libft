/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:08:12 by skrasin           #+#    #+#             */
/*   Updated: 2019/11/19 15:07:27 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_p;
	unsigned char		c_in;

	c_in = (unsigned char)c;
	c_p = (const unsigned char *)s;
	while (n-- > 0 && (size_t)c_p % sizeof(uintmax_t) != 0)
		if (*c_p++ == c_in)
			return ((void *)--c_p);
	return (NULL);
}
