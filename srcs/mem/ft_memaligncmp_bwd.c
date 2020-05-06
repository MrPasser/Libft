/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memaligncmp_bwd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 11:57:14 by svet              #+#    #+#             */
/*   Updated: 2020/05/05 17:08:35 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_uintptr_t.h>

size_t	ft_memaligncmp_bwd(const void *const *const ds,
				const void *const *const sr, size_t nbytes, uintptr_t align)
{
	uintptr_t		t;
	const uintptr_t	dst = (const uintptr_t)*(long **)ds;
	const uintptr_t	src = (const uintptr_t)*(const long **)sr;

	t = src;
	if ((t | dst) & (align - 1))
	{
		if ((t ^ dst) & (align - 1) || nbytes < (align))
			t = nbytes;
		else
			t &= align - 1;
		return (t);
	}
	return (0);
}
