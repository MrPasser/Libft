/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxsubmtx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:01:00 by svet              #+#    #+#             */
/*   Updated: 2021/04/15 16:01:25 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_matrix	*ft_mtxaddmtx(t_matrix mtx1, t_matrix mtx2)
{
	t_matrix	*new_mtx;
	long double	*array;
	size_t		n;
	size_t		i;

	if (mtx1.rows != mtx2.rows || mtx1.columns != mtx2.columns ||
						(new_mtx = ft_mtxnew(mtx1.rows, mtx1.columns)) == NULL)
		return (NULL);
	n = mtx1.rows * mtx1.columns;
	i = 0;
	array = new_mtx->content;
	while (i < n)
	{
		array[i] = mtx1.content[i] - mtx2.content[i];
		++i;
	}
	return (new_mtx);
}
