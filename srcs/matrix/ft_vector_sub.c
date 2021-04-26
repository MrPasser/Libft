/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:31:11 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:37:37 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_sub(t_vector *a, const t_vector *b)
{
	const size_t	a_stride = a->stride;
	const size_t	b_stride = b->stride;
	long double		*a_content;
	long double		*b_content;
	size_t			i;

	if (a->size != b->size)
		return (-1);
	a_content = a->content;
	b_content = b->content;
	i = 0;
	while (i < a->size)
		a_content[i * a_stride] -= b_content[i * b_stride];
	return (0);
}
