/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_div_elements.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:49:10 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 17:49:36 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_div_elements(t_matrix *a, const t_matrix *b)
{
	long double	*a_content;
	long double	*b_content;
	size_t		i;
	size_t		j;

	if (a->size1 != b->size1 || a->size2 != b->size2)
		return (-1);
	a_content = a->content;
	b_content = b->content;
	i = 0;
	while (i < a->size1)
	{
		j = 0;
		while (j < a->size2)
		{
			a_content[i * a->tda + j] /= b_content[i * b->tda + j];
			++j;
		}
		++i;
	}
	return (0);
}
