/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:12:19 by svet              #+#    #+#             */
/*   Updated: 2021/04/25 13:27:16 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int	ft_matrix_swap(t_matrix *m1, t_matrix *m2)
{
	long double	*m1_content;
	long double	*m2_content;
	long double	tmp;
	size_t		i;
	size_t		j;

	if (m1->size1 != m2->size1 || m1->size2 != m2->size2)
		return (-1);
	m1_content = m1->content;
	m2_content = m2->content;
	i = 0;
	while (i < m1->size1)
	{
		j = 0;
		while (j < m1->size2)
		{
			tmp = m1_content[m1->tda * i + j];
			m1_content[m1->tda * i + j] = m2_content[m2->tda * i + j];
			m2_content[m2->tda * i + j] = tmp;
			++j;
		}
		++i;
	}
	return (0);
}
