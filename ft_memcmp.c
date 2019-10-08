/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:21:01 by skrasin           #+#    #+#             */
/*   Updated: 2019/09/25 23:49:47 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if (!(*(unsigned char *)s1++ == *(unsigned char *)s2++))
			return (*((unsigned char *)--s1) - *((unsigned char *)--s2));
	return (0);
}
