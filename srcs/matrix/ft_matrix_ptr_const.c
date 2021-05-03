/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_ptr_const.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:41:32 by svet              #+#    #+#             */
/*   Updated: 2021/05/03 14:43:06 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

const long double	*ft_matrix_ptr_const(
	const t_matrix *m,
	const size_t i,
	const size_t j
)
{
	return ((const long double *)(m->content + (i * m->tda + j)));
}
