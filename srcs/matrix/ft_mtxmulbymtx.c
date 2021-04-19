/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxmulbymtx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:46:54 by svet              #+#    #+#             */
/*   Updated: 2021/04/16 12:27:01 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_matrix		*ft_mtxmulbymtx(t_matrix *mtx_l, t_matrix *mtx_r)
{
	t_matrix	*new_mtx;
	size_t		i;
	size_t		j;
	size_t		k;

	if (mtx_l->columns != mtx_r->rows || (new_mtx =
							ft_mtxnew(mtx_l->rows, mtx_r->columns)) == NULL)
		return (NULL);
	i = 0;
	while (i < mtx_l->rows)
	{
		j = 0;
		while (j < mtx_r->columns)
		{
			k = 0;
			while (k < mtx_l->columns)
			{
				ft_mtxsetelem(new_mtx, i, j,
				ft_mtxgetelem(*new_mtx, i, j) +
				ft_mtxgetelem(*mtx_l, i, k) * ft_mtxgetelem(*mtx_r, k, j));
				++k;
			}
			++j;
		}
		++i;
	}
	return (new_mtx);
}
