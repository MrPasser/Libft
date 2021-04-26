/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_zero.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:58:27 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 20:59:09 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_set_zero(t_matrix *m)
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
			content[i * m->tda + j] = 0.0L;
			++j;
		}
		++i;
	}
}
