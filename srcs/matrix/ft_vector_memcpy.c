/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:19:59 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:32:02 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"

int	ft_vector_memcpy(t_vector *dst, const t_vector *src)
{
	const size_t	dst_stride = dst->stride;
	const size_t	src_stride = src->stride;
	long double		*dst_content = dst->content;
	long double		*src_content = src->content;
	size_t			i;
	

	if (dst->size != src->size)
		return (-1);
	i = 0;
	while (i < dst->size)
	{
		dst_content[i * dst_stride] = src_content[i * src_stride];
		++i;
	}
	return (0);
}
