/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:59:28 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 21:00:04 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_set_all(t_matrix *m, long double x)
{
	const size_t p = m->size1;
	const size_t q = m->size2;
	long double *content = m->content;
	size_t i;
	size_t j;

	i = 0;
	while (i < p)
	{
		j = 0;
		while (j < q)
		{
			content[i * m->tda + j] = x;
			++j;
		}
		++i;
	}
}
