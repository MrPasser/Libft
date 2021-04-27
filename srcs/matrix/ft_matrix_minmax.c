/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_minmax.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:18:23 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 18:03:21 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_minmax(
	const t_matrix *m,
	long double *min_out,
	long double *max_out
)
{
	const long double	*content = m->content;
	long double			max;
	long double			min;
	size_t				i;
	size_t				j;

	max = content[0];
	min = max;
	i = 0;
	while (i < m->size1)
	{
		j = 0;
		while (j < m->size2)
		{
			if (content[i * m->tda + j] > max)
				max = content[i * m->tda + j];
			if (content[i * m->tda + j] < min)
				min = content[i * m->tda + j];
			++j;
		}
		++i;
	}
	*min_out = min;
	*max_out = max;
}
