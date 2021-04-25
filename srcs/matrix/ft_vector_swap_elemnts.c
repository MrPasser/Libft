/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_swap_elemnts.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:10:08 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 13:19:40 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_swap_elemnts(t_vector *v, size_t i, size_t j)
{
	const size_t	size = v->size;
	long double		*content;
	long double		tmp;

	if (i >= size || j >= size)
		return (-1);
	if (i != j)
	{
		content = v->content;
		tmp = content[i];
		content[i] = content[j];
		content[j] = tmp;
	}
	return (0);
}
