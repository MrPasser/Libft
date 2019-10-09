/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:45:03 by skrasin           #+#    #+#             */
/*   Updated: 2019/10/08 16:49:57 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
					size_t n)
{
	register unsigned char			*ds;
	register const unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (n--)
		if ((*ds++ = *sr++) == (unsigned char)c)
			return (ds);
	return (NULL);
}
