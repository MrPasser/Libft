/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:40:16 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 12:56:21 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_vector_reverse(t_vector *v)
{
	long double		*content_start;
	long double		*content_end;
	long double		tmp;

	content_start = v->content;
	content_end = content_start + v->size - 1;
	while (content_end > content_start)
	{
		tmp = *content_start;
		*content_start = *content_end;
		*content_end = tmp;
		++content_start;
		--content_end;
	}
	return (0);
}
