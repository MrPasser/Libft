/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_min_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:58:46 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:33:54 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

size_t	ft_vector_min_index(const t_vector *v)
{
	const size_t		stride = v->stride;
	const long double	*content;
	long double			min;
	long double			imin;
	size_t				i;

	content = v->content;
	min = content[0];
	imin = 0;
	i = 1;
	while (i < v->size)
	{
		if (content[i * stride] < min)
		{
			min = content[i * stride];
			imin = i;
		}
		++i;
	}
	return (imin);
}
