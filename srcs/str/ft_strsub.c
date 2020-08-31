/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:38:37 by skrasin           #+#    #+#             */
/*   Updated: 2020/08/31 14:16:15 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"
#include <sys/_types/_null.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *const substr = ft_strnew(len);

	if (s == NULL || substr == NULL)
		return (NULL);
	if (start >= len)
		return (substr);
	return (ft_memcpy(substr, s + start, len));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	return (ft_strsub(s, start, len));
}
