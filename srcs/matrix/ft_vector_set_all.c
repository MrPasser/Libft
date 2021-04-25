/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:53:04 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 12:13:54 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_vector_set_all(t_vector *v, long double x)
{
	long double *const	content = v->content;
	const size_t		n = v->size;
	size_t				i;

	i = 0;
	while (i < n)
	{
		*(long double *)(content + i) = x;
		++i;
	}
}
