/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:34:47 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 15:08:23 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H
# include <sys/_types/_size_t.h>

typedef struct		s_block
{
	long double		*content;
	size_t			size;
}					t_block;

/*
** block	stores the location of the allocated memory
** content	is the location of the first element in memory
** size		is number of vector elemnts
** owner	is flag to determen the owner of the block
*/

typedef struct		s_vector
{
	t_block			*block;
	long double		*content;
	size_t			size;
	int				owner;
}					t_vector;

/*
** tda	is trailing dimension
*/

typedef struct		s_matrix
{
	t_block			*block;
	long double		*content;
	size_t			size1;
	size_t			size2;
	size_t			tda;
	int				owner;
}					t_matrix;

t_block				*ft_block_memalloc(size_t n);
void				ft_block_free(t_block *b);
long double			*ft_block_content(const t_block *b);
size_t				ft_block_size(const t_block *b);

t_vector			*ft_vector_memalloc(size_t n);
t_vector			*ft_vector_memalloc_from_block(t_block *b,
										const size_t offset, const size_t n);
t_vector			*ft_vectror_memalloc_from_vector(t_vector *w, 
										const size_t offset, const size_t n);
void				ft_vector_free(t_vector *v);
long double			ft_vector_get(const t_vector *v, const size_t i);
void				ft_vector_set(t_vector *v, const size_t i, long double x);
long double			*ft_vector_ptr(t_vector *v, size_t i);
const long double	*ft_vector_const_ptr(t_vector *v, size_t i);
void				ft_vector_set_zero(t_vector *v);
void				ft_vector_set_all(t_vector *v, long double x);
int					ft_vector_set_basis(t_vector *v, size_t i);
int					ft_vector_memcpy(t_vector *dst, const t_vector *src);
int					ft_vector_reverse(t_vector *v);
int					ft_vector_swap(t_vector *v, t_vector *w);
int					ft_vecotor_swap_elements(t_vector *v, const size_t i,
																const size_t j);
long double			ft_vector_min(const t_vector *v);
long double			ft_vector_max(const t_vector *v);
void				ft_vector_minmax(const t_vector *v, long double *min_out,
														long double *max_out);
size_t				ft_vector_min_index(const t_vector *v);
size_t				ft_vector_max_index(const t_vector *v);
void				ft_vector_minmax_index(const t_vector *v, size_t *imin,
																size_t *imax);
int					ft_vector_add(t_vector *a, const t_vector *b);
int					ft_vector_sub(t_vector *a, const t_vector *b);
int					ft_vector_mul(t_vector *a, const t_vector *b);
int					ft_vector_div(t_vector *a, const t_vector *b);
int					ft_vector_scale(t_vector *a, const long double x);
int					ft_vector_add_constant(t_vector *a, const long double x);
/*
**	performs operation y <- ax + by
*/
int					ft_vector_axpby(const long double alpha, const t_vector *x,
										const long double beta, t_vector *y);
int					ft_vector_equal(const t_vector *u, const t_vector *v);


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
