/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:14:45 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 20:40:21 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

void	ft_matrix_free(t_matrix *m)
{
	if (m == NULL)
		return ;
	if (m->owner == 1)
		ft_block_free(m->block);
	ft_memdel((void **)&m);
}
