/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:39:01 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 13:41:38 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

long double	ft_vector_min(const t_vector *v)
{
	const size_t		n = v->size;
	const long double	*content;
	long double			min;
	size_t				i;

	content = v->content;
	min = content[0];
	i = 1;
	while (i < n)
	{
		if (content[i] < min)
			min = content[i];
		++i;
	}
	return (min);
}
