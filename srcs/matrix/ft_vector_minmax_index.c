/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_minmax_index.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:59:54 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 14:20:25 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_vector_minmax_index(const t_vector *v, size_t *imin, size_t *imax)
{
	*imin = ft_vector_min_index(v);
	*imax = ft_vector_max_index(v);
}
