/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:28:27 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 13:38:47 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

long double	ft_vector_max(const t_vector *v)
{
	const size_t		n = v->size;
	const long double	*content;
	long double			max;
	size_t				i;

	content = v->content;
	max = content[0];
	i = 1;
	while (i < n)
	{
		if (max < content[i])
			max = content[i];
		++i;
	}
	return (max);
}
