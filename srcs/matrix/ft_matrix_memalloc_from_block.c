/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_memalloc_from_block.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:15:58 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 21:10:42 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_matrix	*ft_matrix_memalloc_from_block(
	t_block *b,
	const size_t n1,
	const size_t n2,
	const size_t d2
)
{
	t_matrix *m;

	if (d2 < n2 || b->size < n1 * d2 ||
						(m = (t_matrix *)ft_memalloc(sizeof(t_matrix))) == NULL)
		return (NULL);
	m->block = b;
	m->content = b->content;
	m->size1 = n1;
	m->size2 = n2;
	m->tda = d2;
	m->owner = 0;
	return (m);
}
