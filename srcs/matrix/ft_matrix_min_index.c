/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_min_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:28:25 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 18:04:13 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_min_index(const t_matrix *m, size_t *imin, size_t *jmin)
{
	long double	min;
	size_t		i_min;
	size_t		j_min;
	size_t		i;
	size_t		j;

	min = m->content[0];
	i = 0;
	while (i < m->size1)
	{
		j = 0;
		while (j < m->size2)
		{
			if (m->content[i * m->tda + j] < min)
			{
				min = m->content[i * m->tda + j];
				i_min = i;
				j_min = j;
			}
			++j;
		}
		++i;
	}
	*imin = i_min;
	*jmin = j_min;
}
