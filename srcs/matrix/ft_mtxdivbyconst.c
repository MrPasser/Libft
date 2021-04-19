/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxdivbyconst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:39:19 by svet              #+#    #+#             */
/*   Updated: 2021/04/15 14:41:26 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_mtxdivbyconst(t_matrix *mtx, long double val)
{
	ft_mtxmulbyconst(mtx, 1 / val);
}
