/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_add_diagonal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:53:58 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 17:57:11 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_add_diagonal(t_matrix *a, const long double x)
{
	const size_t	loop_limit = (a->size1 < a->size2 ? a->size1 : a->size2);
	const size_t	tda = a->tda;
	long double		*a_content;
	size_t			i;

	a_content = a->content;
	i = 0;
	while (i < loop_limit)
	{
		a_content[i * tda + i] += x;
		++i;
	}
	return (0);
}
