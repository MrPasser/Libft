/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_transpose_memcpy.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:03:28 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 18:05:41 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_transpose_memcpy(t_matrix *dst, const t_matrix *src)
{
	long double	*dst_content;
	long double *src_content;
	size_t		i;
	size_t		j;

	if (dst->size1 != src->size2 || dst->size2 != src->size1)
		return (-1);
	dst_content = dst->content;
	src_content = src->content;
	i = 0;
	while (i < dst->size1)
	{
		j = 0;
		while (j < dst->size2)
		{
			dst_content[i * dst->tda + j] = src_content[j * src->tda + i];
			++j;
		}
		++i;
	}
	return (0);
}
