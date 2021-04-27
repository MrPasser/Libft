/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_transpose.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:54:04 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 18:04:57 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_transpose(t_matrix *m)
{
	const size_t	tda = m->tda;
	long double		*content;
	long double		tmp;
	size_t			i;
	size_t			j;

	if (m->size1 != m->size2)
		return (-1);
	content = m->content;
	i = 0;
	while (i < m->size1)
	{
		j = i + 1;
		while (j < m->size2)
		{
			tmp = content[i * m->tda + j];
			content[i * tda + j] = content[j * tda + i];
			content[j * tda + i] = tmp;
		}
		++i;
	}
	return (0);
}

