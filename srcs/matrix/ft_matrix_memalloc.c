/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_memalloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:21:49 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 21:10:50 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_matrix	*ft_matrix_memalloc(const size_t n1, const size_t n2)
{
	t_block		*b;
	t_matrix	*m;

	if ((m = (t_matrix *)ft_memalloc(sizeof(t_matrix))) == NULL)
		return (NULL);
	if ((b = (t_block *)ft_block_memalloc(n1 * n2)) == NULL)
		return (NULL);
	m->block = b;
	m->content = b->content;
	m->size1 = n1;
	m->size2 = n2;
	m->tda = n2;
	m->owner = 1;
	return (m);
}
