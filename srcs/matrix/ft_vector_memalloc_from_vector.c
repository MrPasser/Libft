/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memalloc_from_vector.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:32:01 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 10:47:46 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_vector	*ft_vector_memalloc_from_vector(
	const t_vector *w,
	const size_t offset,
	const size_t n
)
{
	t_vector *v;

	if (offset + (n > 0 ? n - 1 : 0) >= w->size ||
									(v = ft_memalloc(sizeof(t_vector))) == NULL)
		return (NULL);
	v->block = w->block;
	v->content = w->content + offset;
	v->size = n;
	v->owner = 0;
	return (v);
}
