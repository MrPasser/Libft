/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_axpby.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:42:48 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 14:54:39 by svet             ###   ########.fr       */
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
	const size_t	n = x->size;
	long double		*x_content;
	long double		*y_content;
	size_t			i;

	if (n != y->size)
		return (-1);
	x_content = x->content;
	y_content = y->content;
	i = 0;
	while (i < n)
	{
		y_content[i] = alpha * x_content[i] + beta * y_content[i];
		++i;
	}
	return (0);
}
