/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 11:05:57 by svet              #+#    #+#             */
/*   Updated: 2020/06/09 06:01:01 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_math.h"
#include <sys/_types/_null.h>

char	*ft_ltoa_base(long n, int base, int isupper)
{
	char		*s;
	size_t		len;
	long		rem;
	const long	sign = n < 0 ? -1L : 1L;
	const char	a = isupper == 1 ? 'A' : 'a';

	len = ft_num_of_digs(n, base) + (n < 0 ? 1 : 0);
	len += base == 8 ? 1 : 0;
	len += base == 16 ? 2 : 0;
	if (base < 2 || base > 36 || ((s = (char *)ft_memalloc(len + 1)) == NULL))
		return (NULL);
	if (base == 16 && n == 0)
		return (ft_memcpy(s, "0x0", 4));
	s[0] = (n < 0) ? '-' : '0';
	while (n != 0)
	{
		rem = n % base * sign;
		s[--len] = rem > 9 ? rem - 10 + a : rem + '0';
		n /= base;
	}
	if (base == 16)
		s[--len] = 'x';
	if (base == 16 || base == 8)
		s[len - 1] = '0';
	return (s);
}
