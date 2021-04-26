/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_equal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:54:53 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 12:51:38 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_equal(const t_vector *u, const t_vector *v)
{
	const size_t		u_stride = u->stride;
	const size_t		v_stride = v->stride;
	const long double	*u_content;
	const long double	*v_content;
	size_t				i;

	if (u->size != v->size)
		return (-1);
	u_content = u->content;
	v_content = v->content;
	i = 0;
	while (i < u->size)
	{
		if (u_content[i * u_stride] != v_content[i * v_stride])
			return (0);
	}
	return (1);
}
