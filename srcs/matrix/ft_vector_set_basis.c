/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set_basis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 11:05:11 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:23:03 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_set_basis(t_vector *v, size_t i)
{
	long double *const	content = v->content;
	const size_t		n = v->size;
	const size_t		stride = v->stride;
	size_t				k;

	if (i >= n)
		return (-1);
	k = 0;
	while (k < n)
	{
		*(long double *)(content + k * stride) = 0.0L;
		++k;
	}
	*(long double *)(content + i * stride) = 1.0L;
	return (0);
}
