/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memalloc_from_col_matrix.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:16:02 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 13:28:14 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_vector	*ft_vector_memalloc_from_row_matrix(t_matrix *m, const size_t j)
{
	const size_t N = m->size2;
	t_vector *v;

	if (j > N || (v = (t_vector *)ft_memalloc(sizeof(t_vector))) == NULL)
		return (NULL);
	v->content = m->content + j;
	v->size = m->size1;
	v->stride = m->tda;
	return (v);
}
