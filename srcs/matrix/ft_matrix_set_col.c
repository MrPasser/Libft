/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_col.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:36:03 by svet              #+#    #+#             */
/*   Updated: 2021/05/03 14:46:58 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_set_col(t_matrix *m, const size_t j, const t_vector *v)
{
	const long double	*v_content = v->content;
	const size_t		m_tda = m->tda;
	const size_t		v_stride = v->stride;
	long double			*col_data;
	size_t				i;

	if (j >= m->size2 || v->size != m->size1)
		return (-1);
	col_data = m->content + j;
	i = 0;
	while (i < m->size1)
	{
		col_data[m_tda * i] = v_content[v_stride * i];
		++i;
	}
	return (0);
}
