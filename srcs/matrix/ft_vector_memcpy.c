/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:19:59 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 12:27:05 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"

int	ft_vector_memcpy(t_vector *dst, const t_vector *src)
{
	const size_t	dst_size = dst->size;

	if (dst_size != src->size)
		return (-1);
	ft_memcpy(dst->content, src->content, dst->size * sizeof(long double));
	return (0);
}
