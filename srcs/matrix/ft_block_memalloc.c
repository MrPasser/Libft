/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_memalloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:41:33 by svet              #+#    #+#             */
/*   Updated: 2021/04/19 18:05:29 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

t_block	*ft_block_memalloc(size_t n)
{
	t_block *b;

	if ((b = ft_memalloc(sizeof(t_block))) == NULL)
		return (NULL);
	b->content = ft_memalloc(n * sizeof(long double));
	if (b->content == NULL && n > 0)
	{
		ft_memdel((void **)&b);
		return (NULL);
	}
	b->size = n;
	return (b);
}
