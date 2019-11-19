/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:45:03 by skrasin           #+#    #+#             */
/*   Updated: 2019/11/19 14:39:58 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
					size_t n)
{
	void	*p;

	p = memchr(src, c, n);
	if (p)
		return (mempcpy(dst, src, p - src + 1));
	memcpy(dst, src, n);
	return (NULL);
}
