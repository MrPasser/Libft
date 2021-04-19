/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnormalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:13:16 by svet              #+#    #+#             */
/*   Updated: 2021/04/15 15:03:55 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"
#include "math.h"

void	ft_vecnormalize(t_matrix *vec)
{
	const long double	len = ft_veclength(*vec);

	if (len > 0.0)
		ft_mtxdivbyconst(vec, len);
}
