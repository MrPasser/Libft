/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_scale.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:34:05 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 14:36:30 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_scale(t_vector *a, const long double x)
{
	const size_t	n = a->size;
	long double		*a_content;
	size_t			i;

	a_content = a->content;
	i = 0;
	while (i < n)
		a_content[i] *= x;
	return (0);
}
