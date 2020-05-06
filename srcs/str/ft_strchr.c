/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:55:19 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/06 10:05:52 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"
#include <sys/_types/_null.h>

// static size_t	ft_testlongstrchr(const unsigned long *uls, const int c)
// {
// 	const char *const	s = (const char *)uls;
// 	const size_t		n = sizeof(long);
// 	size_t				i;
// 	char				tmp;

// 	i = 0;
// 	while (i < n)
// 		if ((tmp = s[i++]) == c)
// 			return (i + 1);
// 		else if (tmp == '\0')
// 			return (1);
// 	return (0);
// }

// char			*ft_strchr(const char *str, int c)
// {
// 	const unsigned long	*uls;
// 	unsigned long		x;
// 	//const unsigned long	magic = ft_repcset(0xfe) << 1 >> 1 | 1;
// 	const unsigned long	magic = 0x7EFEFEFEFEFEFEFF;
// 	const unsigned long	rep_c = ft_repcset(c);

// 	c = (unsigned char)c;
// 	x = sizeof(size_t) - ((uintptr_t)str & (sizeof(size_t) - 1));
// 	while (x-- != 0)
// 		if (*str == c)
// 			return ((char *)str);
// 		else if (*str++ == '\0')
// 			return (NULL);
// 	uls = (const unsigned long *)str - 1;
// 	while (++uls)
// 		if ((((*uls + magic) & ~*uls) & ~magic) != 0 || ((((*uls ^ rep_c) + magic) ^ ~(*uls ^ rep_c)) & ~magic) != 0)
// 			if ((x = ft_testlongstrchr(uls, c)) != 0)
// 			{
// 				if (x == 1)
// 					return (NULL);
// 				else
// 					return ((char *)uls + x - 2);
// 			}
// 	return (NULL);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	return (ft_memchr(s, c, ft_strlen(s) + 1));
// }

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}