/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:39:01 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:34:18 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

long double	ft_vector_min(const t_vector *v)
{
	const size_t		n = v->size;
	const size_t		stride = v->stride;
	const long double	*content;
	long double			min;
	size_t				i;

	content = v->content;
	min = content[0];
	i = 1;
	while (i < n)
	{
		if (content[i * stride] < min)
			min = content[i * stride];
		++i;
	}
	return (min);
}
