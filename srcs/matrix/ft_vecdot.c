/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecdot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:08:18 by svet              #+#    #+#             */
/*   Updated: 2021/04/17 11:43:06 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_matrix.h"
# include "math.h"

long double	ft_vecdot(t_matrix vec1, t_matrix vec2) //avoid 1x1 mtx
{
	const size_t	n = fmaxl(fminl(vec1.rows, vec2.rows),
										fminl(vec1.columns, vec2.columns));
	long double		comp;
	size_t			i;

	comp = 0.0;
	i = 0;
	while (i < n)
	{
		comp += vec1.content[i] * vec2.content[i];
		++i;
	}
	return (comp);
}
