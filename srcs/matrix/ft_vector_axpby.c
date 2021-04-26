/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_axpby.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:42:48 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:49:53 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_axpby(
	const long double alpha,
	const t_vector *x,
	const long double beta,
	t_vector *y
)
{
	const size_t	x_stride = x->stride;
	const size_t	y_stride = y->stride;
	long double		*x_content;
	long double		*y_content;
	size_t			i;

	if (x->size != y->size)
		return (-1);
	x_content = x->content;
	y_content = y->content;
	i = 0;
	while (i < x->size)
	{
		y_content[i * y_stride] = alpha * x_content[i * x_stride] +
												beta * y_content[i * y_stride];
		++i;
	}
	return (0);
}
