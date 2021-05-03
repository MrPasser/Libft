/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_row.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:07:27 by svet              #+#    #+#             */
/*   Updated: 2021/05/03 14:47:12 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_set_row(t_matrix *m, const size_t i, const t_vector *v)
{
	const long double	*v_content = v->content;
	const size_t		N = m->size2;
	const size_t		v_stride = v->stride;
	long double			*row_data;
	size_t				j;

	if (i >= m->size1 || v->size != N)
		return (-1);
	row_data = m->content + i * m->tda;
	j = 0;
	while (j < N)
	{
		row_data[j] = v_content[v_stride * j];
		++j;
	}
	return (0);
}
