/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_add_constant.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:52:01 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 17:53:26 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_add_constant(t_matrix *a, const long double x)
{
	const size_t	size1 = a->size1;
	const size_t	size2 = a->size2;
	long double		*a_content;
	size_t			i;
	size_t			j;

	a_content = a->content;
	i = 0;
	while (i < size1)
	{
		j = 0;
		while (j < size2)
		{
			a_content[i * a->tda + j] += x;
			++j;
		}
		++i;
	}
	return (0);
}
