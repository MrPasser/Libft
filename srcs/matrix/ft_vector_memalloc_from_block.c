/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memalloc_from_block.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:23:14 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:17:26 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_vector	*ft_vector_memalloc_from_block(
	t_block *b,
	const size_t offset,
	const size_t n,
	const size_t stride
)
{
	t_vector *v;

	if (stride == 0 || b->size <= offset + (n > 0 ? n - 1 : 0) * stride ||
									(v = ft_memalloc(sizeof(t_vector))) == NULL)
		return (NULL);
	v->block = b;
	v->content = b->content + offset;
	v->size = n;
	v->stride = stride;
	v->owner = 0;
	return (v);
}
