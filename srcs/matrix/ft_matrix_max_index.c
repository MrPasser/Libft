/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_max_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:23:35 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 18:04:06 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_max_index(const t_matrix *m, size_t *imax, size_t *jmax)
{
	long double	max;
	size_t		i_max;
	size_t		j_max;
	size_t		i;
	size_t		j;

	max = m->content[0];
	i = 0;
	while (i < m->size1)
	{
		j = 0;
		while (j < m->size2)
		{
			if (m->content[i * m->tda + j] > max)
			{
				max = m->content[i * m->tda + j];
				i_max = i;
				j_max = j;
			}
			++j;
		}
		++i;
	}
	*imax = i_max;
	*jmax = j_max;
}
