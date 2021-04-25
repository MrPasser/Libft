/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_minmax.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:41:52 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 13:49:11 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void ft_vector_minmax(
	const t_vector *v,
	long double *min_out,
	long double *max_out
)
{
	const size_t		n = v->size;
	const long double	*content;
	long double			min;
	long double			max;
	size_t				i;

	content = v->content;
	min = content[0];
	max = min;
	i = 1;
	while (i < n)
	{
		if (content[i] < min)
			min = content[i];
		if (content[i] > max)
			max = content[i];
		++i;
	}
	*min_out = min;
	*max_out = max;
}
