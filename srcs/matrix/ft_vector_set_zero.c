/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set_zero.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 11:00:14 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 12:14:07 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_vector_set_zero(t_vector *v)
{
	long double *const	content = v->content;
	const size_t		n = v->size;
	size_t				i;

	i = 0;
	while (i < n)
	{
		*(long double *)(content + i) = 0.0L;
		++i;
	}
}
