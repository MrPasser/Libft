/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_identity.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:51:07 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 20:58:40 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_set_identity(t_matrix *m)
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
			content[i * m->tda + j] = i == j ? 1.0L : 0.0L;
			++j;
		}
		++i;
	}
}
