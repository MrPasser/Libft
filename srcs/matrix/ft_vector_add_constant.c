/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_add_constant.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:35:21 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 14:36:17 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_add_constant(t_vector *a, const long double x)
{
	const size_t	n = a->size;
	long double		*a_content;
	size_t			i;

	a_content = a->content;
	i = 0;
	while (i < n)
		a_content[i] += x;
	return (0);
}
