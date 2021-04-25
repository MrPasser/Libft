/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:31:55 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 14:33:00 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_mul(t_vector *a, const t_vector *b)
{
	const size_t	n = a->size;
	long double		*a_content;
	long double		*b_content;
	size_t			i;

	if (n != b->size)
		return (-1);
	a_content = a->content;
	b_content = b->content;
	i = 0;
	while (i < n)
		a_content[i] *= b_content[i];
	return (0);
}
