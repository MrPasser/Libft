/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_swap_elements.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:10:08 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:53:39 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_swap_elements(t_vector *v, size_t i, size_t j)
{
	const size_t	size = v->size;
	const size_t	stride = v->stride;
	long double		*content;
	long double		tmp;

	if (i >= size || j >= size)
		return (-1);
	if (i != j)
	{
		content = v->content;
		tmp = content[i * stride];
		content[i * stride] = content[j * stride];
		content[j * stride] = tmp;
	}
	return (0);
}
