/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_get_col.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:57:27 by svet              #+#    #+#             */
/*   Updated: 2021/05/03 13:47:09 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_get_col(t_vector *v, const t_matrix *m, const size_t j)
{
	const long double	*col_data = m->content + j;
	const size_t		v_stride = v->stride;
	const size_t		m_tda = m->tda;
	long double			*v_content;
	size_t				i;

	if (j >= m->size2 || v->size != m->size1)
		return (-1);
	v_content = v->content;
	i = 0;
	while (i < m->size1)
	{
		v_content[v_stride * i] = col_data[m_tda * i];
		++i;
	}
	return (0);
}
