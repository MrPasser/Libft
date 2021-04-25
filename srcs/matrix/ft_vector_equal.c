/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_equal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:54:53 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 15:01:03 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_equal(const t_vector *u, const t_vector *v)
{
	const size_t		n = u->size;
	const long double	*u_content;
	const long double	*v_content;
	size_t				i;

	if (n != v->size)
		return (-1);
	u_content = u->content;
	v_content = v->content;
	i = 0;
	while (i < n)
	{
		if (u_content[i] != v_content[i])
			return (0);
	}
	return (1);
}
