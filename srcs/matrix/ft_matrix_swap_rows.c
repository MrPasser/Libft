/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_swap_rows.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:30:50 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 13:14:06 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_swap_rows(t_matrix *m, const size_t i, const size_t j)
{
	const size_t	size2 = m->size2;
	long double		*row1;
	long double		*row2;
	long double		tmp;
	size_t			k;

	if (i >= m->size1 || j >= m->size1)
		return (-1);
	if (i != j)
	{
		row1 = m->content + i * m->tda;
		row2 = m->content + j * m->tda;
		k = 0;
		while (k < size2)
		{
			tmp = row1[k];
			row1[k] = row2[k];
			row2[k] = tmp;
			++k;
		}
	}
	return (0);
}
