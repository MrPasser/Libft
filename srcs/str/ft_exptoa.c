/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exptoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:13 by svet              #+#    #+#             */
/*   Updated: 2020/10/14 20:12:38 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_math.h"
#include <stdlib.h>

static inline unsigned int	ft_exp(long double val, int prec)
{
	unsigned long e;

	e = 0;
	if (val != 0)
		while(llabs(val) < 1)
		{
			val *= 10;
			--e;
		}
	while (llabs(ft_round(val, prec)) >= 10)
	{
		val /= 10;
		++e;
	}
	return (e);
}

char						*ft_exptoa(
	long double val,
	int prec,
	int base,
	int isupper
)
{
	char				*str[2];
	unsigned long int	e;

	if ((e = ft_exp(val, prec)) > 0)
		val /= ft_pow(10, e);
	else if (e < 0)
		 val *= ft_pow(10, -e);
	str[1] = ft_ldtoa_base(ft_round(val, prec), prec, base, isupper);
	if (str[0] = ft_strjoin(str[1], "e ") == NULL)
		return (NULL);
	free(str[1]);
	str[1] = ft_ltoa_base(llabs(e), base, isupper);
	str[0][ft_strlen(str[0]) - 1] = e < 0 ? '-' : '+';
	if (ft_strappend(&str[0], str[1]) == NULL)
		return (NULL);
	free(str[1]);
	return (str[0]);
}
