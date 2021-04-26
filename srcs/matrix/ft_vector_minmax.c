/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_minmax.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:41:52 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:29:01 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_vector_minmax(
	const t_vector *v,
	long double *min_out,
	long double *max_out
)
{
	const size_t		stride = v->stride;
	const long double	*content;
	long double			min;
	long double			max;
	size_t				i;

	content = v->content;
	min = content[0];
	max = min;
	i = 1;
	while (i < v->size)
	{
		if (content[i * stride] < min)
			min = content[i * stride];
		if (content[i * stride] > max)
			max = content[i * stride];
		++i;
	}
	*min_out = min;
	*max_out = max;
}
