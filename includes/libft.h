/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:33:08 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/06 10:04:26 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_char.h"
# include "ft_memory.h"
# include "ft_string.h"

// void				*ft_memset(void *b, int c, size_t len);
// void				ft_bzero(void *s, size_t n);
// void				*ft_memcpy(void *dst, const void *src, size_t n);
// void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
// void				*ft_memmove(void *dst, const void *src, size_t len);
// void				*ft_memchr(const void *s, int c, size_t n);
// int					ft_memcmp(const void *s1, const void *s2, size_t n);
// size_t				ft_strlen(const char *str);

// char				*ft_strchr(const char *s, int c);
// char				*ft_strrchr(const char *s, int c);


// char				*ft_strdup(const char *s1);

// char				*ft_strcpy(char *dst, const char *src);


// char				*ft_strcat(char *restrict s1, const char *restrict s2);


// int					ft_strcmp(const char *s1, const char *s2);
// int					ft_strncmp(const char *s1, const char *s2, size_t n);
// char				*ft_strncat(char *restrict s1, char *restrict s2, size_t n);
// size_t				ft_strlcat(char *restrict dst, const char *restrict src,
// 					size_t dstsize);




// char				*ft_strnstr(const char *haystack, const char *needle,
// 					size_t len);
// int					ft_atoi(const char *str);

// int					ft_isspace(int c);

// char				*ft_strstr(const char *haystack, const char *needle);

// void				*ft_memalloc(size_t size);
// void				ft_memdel(void **ap);
// char				*ft_strnew(size_t size);
// void				ft_strdel(char **as);
// void				ft_strclr(char *s);
// void				ft_striter(char *s, void (*f)(char *));
// void				ft_striteri(char *s, void (*f)(unsigned int, char *));
// char				*ft_strmap(char const *s, char (*f)(char));
// char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// int					ft_strequ(char const *s1, char const *s2);
// int					ft_strnequ(char const *s1, char const *s2, size_t n);
// void				ft_putchar(char c);
// void				ft_putstr(char const *s);
// void				ft_putendl(char const *s);
// void				ft_putnbr(int n);
// void				ft_putchar_fd(char c, int fd);
// void				ft_putstr_fd(char const *s, int fd);
// void				ft_putendl_fd(char const *s, int fd);
// void				ft_putnbr_fd(int n, int fd);
// char				*ft_strsub(char const *s, unsigned int start, size_t len);
// char				*ft_strjoin(char const *s1, char const *s2);
// char				*ft_strtrim(char const *s);
// char				**ft_strsplit(char const *s, char c);
// char				*ft_itoa(int n);
// size_t				ft_num_dig(long int n, int base);
// int					ft_isupper(int c);
// int					ft_islower(int c);
// void				*ft_mempcpy(void *dst, const void *src, size_t n);
// unsigned long		ft_repcset(int c);
// size_t				ft_strnlen(const char *str, size_t n);
// size_t				ft_memaligncmp_bwd(const void *const*const ds,
// 					const void *const*const sr, size_t nbytes, uintptr_t align);
// size_t				ft_memaligncmp(const void *const*const ds,
// 					const void *const*const sr, size_t nbytes, uintptr_t align);

// typedef struct		s_list
// {
// 	void			*content;
// 	size_t			content_size;
// 	struct s_list	*next;
// }					t_list;

// t_list				*ft_lstnew(void const *content, size_t content_size);
// void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
// void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
// void				ft_lstadd(t_list **alst, t_list *new);
// void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
// t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

// void				ft_lstrev(t_list **alst);
// void				ft_display_file(const char *name);
// void				ft_read_write(int fd);
// void				ft_print_bits(unsigned char octet);
// void				ft_swap_p(int **a, int **b);

// int					ft_get_next_line(const int fd, char **line);

#endif
