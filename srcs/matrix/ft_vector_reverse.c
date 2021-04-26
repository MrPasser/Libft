/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:40:16 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:55:14 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_reverse(t_vector *v)
{
	const size_t	stride = v->stride;
	long double		*content;
	long double		tmp;
	size_t			i;
	size_t			j;

	content = v->content;
	i = 0;
	while (i < v->size / 2)
	{
		j = v->size - i - 1;
		tmp = content[i * stride];
		content[i * stride] = content[j * stride];
		content[j * stride] = tmp;
		++i;
	}
	return (0);
}
