/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:10:52 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 18:01:41 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

long double	ft_matrix_max(const t_matrix *m)
{
	const size_t		tda = m->tda;
	const long double	*content = m->content;
	long double			max;
	size_t				i;
	size_t				j;

	max = content[0];
	i = 0;
	while (i < m->size1)
	{
		j = 0;
		while (j < m->size2)
		{
			if (content[i * tda + j] > max)
				max = content[i * tda + j];
			++j;
		}
		++i;
	}
	return (max);
}
