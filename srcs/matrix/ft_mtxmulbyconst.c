/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxmulbyconst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:31:09 by svet              #+#    #+#             */
/*   Updated: 2021/04/15 14:41:55 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_mtxmulbyconst(t_matrix *mtx, long double val)
{
	const size_t	rows = mtx->rows;
	const size_t	columns = mtx->columns;
	size_t			i;
	size_t			j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < columns)
		{
			ft_mtxsetelem(mtx, i, j, ft_mtxgetelem(*mtx, i, j) * val);
			++j;
		}
		++i;
	}
}
