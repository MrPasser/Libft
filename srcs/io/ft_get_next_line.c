/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:00:39 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/19 11:04:05 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"
#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>
#define BUFF_SIZE 4096

static inline t_list	*ft_lstsearch(size_t content_size)
{
	static t_list	*store = NULL;
	t_list			*node;
	char			*tmp;

	node = store;
	while (node != NULL)
	{
		if (node->content_size == content_size)
			return (node);
		node = node->next;
	}
	tmp = ft_strnew(BUFF_SIZE);
	ft_lstadd(&store, ft_lstnew(tmp, BUFF_SIZE + 1));
	free(tmp);
	if (store == NULL)
		return (NULL);
	store->content_size = content_size;
	return (store);
}

static inline char		*ft_strextend(char **dst, char const *src)
{
	char	*tmp;
	size_t	n1;
	size_t	n2;

	if (dst == NULL || *dst == NULL || src == NULL)
		return (NULL);
	tmp = *dst;
	n1 = ft_strlen(*dst);
	n2 = ft_strlen(src);
	if ((*dst = ft_memalloc(n1 + n2 + 1)) == NULL)
		return (NULL);
	*dst = ft_memcpy(*dst, tmp, n1);
	*dst = ft_memcpy(*dst + n1, src, n2);
	free(tmp);
	return (*dst);
}

int						ft_get_next_line(const int fd, char **line)
{
	ssize_t			len;
	t_list			*node;
	char			buf[BUFF_SIZE + 1];
	char			*nl;

	if (fd < 0 || line == NULL || read(fd, 0, 0) == 0 ||
											(node = ft_lstsearch(fd)) == NULL)
		return (-1);
	while ((nl = ft_strchr(node->content, '\n')) != NULL)
	{
		if ((len = read(fd, buf, BUFF_SIZE)) <= 0)
			break ;
		buf[len] = '\0';
		ft_strextend((char **)&node->content, buf);
	}
	*line = nl ? ft_strsub(node->content, 0, nl - (char *)node->content) :
					ft_strdup(node->content);
	*(char *)node->content = '\0';
	nl ? ft_strextend((char **)&node->content, nl + 1) :
		ft_strextend((char **)&node->content, node->content);
	return ((**line == '\0' && !len) ? 0 : 1);
}
