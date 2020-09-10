/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:30:59 by skrasin           #+#    #+#             */
/*   Updated: 2020/09/09 17:31:42 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"
#include "ft_math.h"
#include <float.h>
#include <sys/_types/_null.h>

#define WTF	32

static inline int ft_ldtoa_base_exception(
	long double value,
	char **dst,
	int isupper
)
{
	const int	isinf = ft_isinf(value);
	const int	isnan = ft_isnan(value);
	char		*str;

	if (isinf == 0 && isnan == 0)
		return (0);
	if (isinf == -1 || isnan == -1)
	{
		if ((str = ft_strnew(4)) == NULL)
			return (-1);
		if (isinf == -1)
			ft_memcpy(str, isupper ? "-INF" : "-inf", 4);
		else
			ft_memcpy(str, isupper ? "-NAN" : "-nan", 4);
	}
	else if ((str = ft_strnew(3)) == NULL)
		return (-1);
	else if (isinf == 1)
		ft_memcpy(str, isupper ? "INF" : "inf", 3);
	else
		ft_memcpy(str, isupper ? "NAN" : "nan", 3);
	*dst = str;
	return (1);
}

char	*ft_ldtoa_base(
	long double value,
	unsigned int prec,
	int base,
	int isupper
)
{
	register const char		a = isupper ? 'A' : 'a';
	register const long		sign = value < 0 ? 1L : 0L;
	register char			*str;
	register char			buf[WTF];
	register size_t			len;
	register int			whole;
	register long double	tmp;
	register unsigned long	frac;
	register double			diff;
	register unsigned int	count;
	int						ret;

	if ((ret = ft_ldtoa_base_exception(value, &str, isupper)) == -1)
		return (NULL);
	if (ret == 1)
		return (str);
	if (value > LDBL_MAX_EXP || value < LDBL_MIN_EXP)
		return (ft_etoa(value, prec, base, isupper));
	prec < 0 ? prec = 6 : 0;
	whole = (int)value;
	tmp = (value - whole) * pow10(prec);
	frac = (unsigned long)tmp;
	diff = tmp - frac;
	len = 0U;
	while (len < WTF && prec > 9U)
	{
		buf[len++] = '0';
		--prec;
	}
	if (diff > 0.5)
	{
		++frac;
		if (frac >= pow10(prec))
		{
			frac = 0;
			++whole;
		}
	}
	else if (frac == 0U || frac & 1U)
		++whole;
	if (prec == 0U)
	{
		diff = value - (long double)whole;
		if ((!(diff < 0.5) || diff > 0.5) && whole & 1)
			++whole;
	}
	else
	{
		count = prec;
		while (len < WTF)
		{
			--count;
			buf[len++] = (char)(48U + (frac % 10U));
			if (!(frac /= 10U))
				break ;
		}
		while (len < WTF && count-- > 0U)
			buf[len++] = '0';
		if (len < WTF)
			buf[len++] = '.';
	}
	while (len < WTF)
	{
		buf[len++] = (char)(48 + (whole % 10));
		if (!(whole /= 10))
			break ;
	}
	if (len < WTF)
	{
		if (sign)
			buf[len++] = '-';
	}
	return (str);
}
