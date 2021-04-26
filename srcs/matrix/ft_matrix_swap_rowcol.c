/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_swap_rowcol.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:45:51 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 13:13:46 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_swap_rowcol(t_matrix *m, const size_t i, const size_t j)
{
	long double	*row;
	long double	*col;
	long double	tmp;
	size_t		k;
	size_t		l;

	if (m->size1 != m->size2 || i >= m->size1 || j >= m->size2)
		return (-1);
	row = m->content + i * m->tda;
	col = m->content + j;
	k = 0;
	while (k < m->size1)
	{
		l = k * m->tda;
		tmp = col[l];
		col[l] = row[k];
		row[k] = tmp;
		++k;
	}
	return (0);
}
