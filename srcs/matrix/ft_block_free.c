/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:53:41 by svet              #+#    #+#             */
/*   Updated: 2021/04/19 18:04:31 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_matrix.h"
#include <sys/_types/_null.h>

void	ft_block_free(t_block *b)
{
	if (b == NULL)
		return ;
	ft_memdel((void **)&b->content);
	ft_memdel((void **)&b);
}
