/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memalloc_from_row_matrix.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:06:33 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 13:28:45 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_vector	*ft_vector_memalloc_from_row_matrix(t_matrix *m, const size_t i)
{
	const size_t M = m->size1;
	t_vector *v;

	if (i > M || (v = (t_vector *)ft_memalloc(sizeof(t_vector))) == NULL)
		return (NULL);
	v->content = m->content + i * m->tda;
	v->size = m->size2;
	v->stride = 1;
	return (v);
}
