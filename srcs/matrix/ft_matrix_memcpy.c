/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_memcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:03:34 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 13:26:13 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_memcpy(t_matrix *dst, const t_matrix *src)
{
	const long double	*src_content = src->content;
	long double			*dst_content;
	size_t				i;
	size_t				j;

	if (dst->size1 != src->size1 || dst->size2 != src->size2)
		return (-1);
	dst_content = dst->content;
	i = 0;
	while (i < dst->size1)
	{
		j = 0;
		while (j < src->size2)
		{
			dst_content[dst->tda * i + j] = src_content[src->tda * i + j];
			++j;
		}
		++i;
	}
	return (0);
}
