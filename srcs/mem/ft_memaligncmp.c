/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memaligncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 11:26:27 by svet              #+#    #+#             */
/*   Updated: 2020/05/05 17:07:40 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_uintptr_t.h>

size_t	ft_memaligncmp(const void *const *const ds, const void *const *const sr,
									const size_t nbytes, const uintptr_t align)
{
	uintptr_t			t;
	const uintptr_t		dst = (const uintptr_t)*(long *const*const)ds;
	const uintptr_t		src = (const uintptr_t)*(const long *const*const)sr;

	t = src;
	if ((t | dst) & (align - 1))
	{
		if ((t ^ dst) & (align - 1) || nbytes < (align))
			t = nbytes;
		else
			t = align - (t & (align - 1));
		return (t);
	}
	return (0);
}
