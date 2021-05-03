/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_get_row.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:44:15 by svet              #+#    #+#             */
/*   Updated: 2021/05/03 14:45:31 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_get_row(t_vector *v, const t_matrix *m, const size_t i)
{
	const long double	*row_data = m->content + i * m->tda;
	const size_t		N = m->size2;
	const size_t		v_stride = v->stride;
	long double			*v_content;
	size_t				j;

	if (i >= m->size1 || v->size != N)
		return (-1);
	v_content = v->content;
	j = 0;
	while (j <N)
	{
		v_content[v_stride * j] = row_data[j];
		++j;
	}	
	return (0);
}
