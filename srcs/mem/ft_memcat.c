/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 17:12:07 by svet              #+#    #+#             */
/*   Updated: 2020/08/14 17:20:48 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

char	*ft_memcat(void *dst, void *src, size_t dlen, size_t slen)
{
	void *const dst_p = dst;

	dst = (void *)((OP_T)dst + dlen);
	ft_memcpy(dst, src, slen);
	return (dst_p);
}
