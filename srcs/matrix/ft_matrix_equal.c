/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_equal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:29:45 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 17:59:42 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_equal(const t_matrix *a, const t_matrix *b)
{
	long double *a_content;
	long double *b_content;
	size_t	i;
	size_t	j;

	if (a->size1 != b->size1 || a->size2 != b->size2)
		return (0);
	a_content = a->content;
	b_content = b->content;
	i = 0;
	while (i < a->size1)
	{
		j = 0;
		while (j < a->size2)
			if (a_content[i * a->tda + j] != b_content[i * b->tda + j])
				return (0);
		++i;
	}
	return (1);
}
