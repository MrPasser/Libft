/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veclength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:55:17 by svet              #+#    #+#             */
/*   Updated: 2021/04/15 15:03:50 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"
#include "math.h"

long double	ft_veclength(t_matrix vec)
{
	long double	comp;
	size_t		n;
	size_t		i;

	comp = 0.0;
	if (vec.rows == 1 || vec.columns == 1)
	{
		n = vec.rows * vec.columns;
		i = 0;
		while (i < n)
		{
			comp += powl(vec.content[i], 2.0);
			++i;
		}
	}
	return (sqrtl(comp));
}
