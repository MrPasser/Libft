/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_swap_columns.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:46:16 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 12:58:49 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_swap_columns(t_matrix *m, const size_t i, const size_t j)
{
	long double	*col1;
	long double	*col2;
	long double	tmp;
	size_t		k;
	size_t		l;

	if (i >= m->size2 || j >= m->size2)
		return (-1);
	if (i != j)
	{
		col1 = m->content + i;
		col2 = m->content + j;
		k = 0;
		while (k < m->size1)
		{
			l = k * m->tda;
			tmp = col1[l];
			col1[l] = col2[l];
			col2[l] = tmp;
			++k;
		}
	}
	return (0);
}
