/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_memalloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:10:53 by svet              #+#    #+#             */
/*   Updated: 2021/04/26 12:48:11 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_vector	*ft_vector_memalloc(size_t n)
{
	t_vector	*v;
	t_block		*b;

	if ((v = ft_memalloc(sizeof(t_vector))) == NULL)
		return (NULL);
	if ((b = ft_block_memalloc(n)) == NULL)
	{
		ft_memdel((void **)&v);
		return (NULL);
	}
	v->block = b;
	v->content = b->content;
	v->size = n;
	v->stride = 1;
	v->owner = 1;
	return (v);
}
