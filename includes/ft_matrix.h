/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:34:47 by svet              #+#    #+#             */
/*   Updated: 2021/04/16 19:54:12 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H
# include <sys/_types/_size_t.h>

typedef struct	s_matrix
{
	long double	*content;
	size_t		rows;
	size_t		columns;
}				t_matrix;

t_matrix		*ft_mtxnew(size_t rows, size_t columns);
void			ft_mtxsetelem(t_matrix *mtx, size_t row, size_t column,
															long double value);
long double		ft_mtxgetelem(t_matrix mtx, size_t row, size_t column);
void			ft_mtxprint(t_matrix mtx);
size_t			ft_mtxgetcolumns(t_matrix mtx);
size_t			ft_mtxgetrows(t_matrix mtx);
t_matrix		*ft_mtxaddmtx(t_matrix mtx1, t_matrix mtx2);
t_matrix		*ft_mtxsubmtx(t_matrix mtx1, t_matrix mtx2);
void			ft_mtxmulbyconst(t_matrix *mtx, long double val);
t_matrix		*ft_mtxmulbymtx(t_matrix *mtx_l, t_matrix *mtx_r);
void			ft_mtxdivbyconst(t_matrix *mtx, long double val);
t_matrix		*ft_mtxtranspose(t_matrix mtx);
t_matrix		*ft_mtxinverse(t_matrix mtx);

long double		ft_veclength(t_matrix vec);
void			ft_vecnormalize(t_matrix *vec);
long double		ft_vecdot(t_matrix vec1, t_matrix vec2);

#endif
