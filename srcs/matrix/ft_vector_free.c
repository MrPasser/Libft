/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:15:56 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 12:03:17 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

void	ft_vector_free(t_vector *v)
{
	if (v == NULL)
		return ;
	if (v->owner == 1)
		ft_block_free(v->block);
	ft_memdel((void **)&v);
}
