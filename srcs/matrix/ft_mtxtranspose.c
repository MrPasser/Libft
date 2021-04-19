/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxtranspose.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:43:20 by svet              #+#    #+#             */
/*   Updated: 2021/04/16 19:41:34 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_matrix		*ft_mtxtranspose(t_matrix mtx)
{
	t_matrix	*new_mtx;
	size_t	i;
	size_t	j;

	if (mtx.rows != mtx.columns ||
						(new_mtx = ft_mtxnew(mtx.rows, mtx.columns)) == NULL)
		return (NULL);
	i = 0;
	while (i < mtx.rows)
	{
		j = 0;
		while (j < mtx.columns)
		{
			ft_mtxsetelem(&mtx, i, j, ft_mtxgetelem(mtx, j, i));
			++j;
		}
		++i;
	}
	return (new_mtx);
}
