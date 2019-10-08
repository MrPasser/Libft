/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:12:30 by skrasin           #+#    #+#             */
/*   Updated: 2019/09/25 19:47:51 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{
	void *dstcpy;

	if (!dst && !src)
		return (dst);
	dstcpy = dst;
	while (n--)
		*(unsigned char *)dstcpy++ = *(unsigned char *)src++;
	return (dst);
}
