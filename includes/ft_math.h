/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:47:15 by svet              #+#    #+#             */
/*   Updated: 2020/08/10 17:03:09 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H
# include <_types/_intmax_t.h>
# include <sys/types.h>

typedef struct	s_parts
{
# if defined(__BIG_ENDIAN__)

	u_int32_t msw;
	u_int32_t lsw;
# else

	u_int32_t lsw;
	u_int32_t msw;
# endif

}				t_parts;

typedef union	u_ieee_double_shape_type
{
	double	value;
	t_parts	parts;
}				t_ieee_double_shape_type;

unsigned int	ft_num_of_digs(intmax_t n, int base);

int				ft_isinf(double d);

#endif
