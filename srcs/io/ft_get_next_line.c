/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:00:39 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/26 13:15:32 by svet             ###   ########.fr       */
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

int						ft_get_next_line(const int fd, char **line)
{
	ssize_t			len;
	t_list			*node;
	char			buf[BUFF_SIZE + 1];
	char			*nl;

	if (fd < 0 || line == NULL || read(fd, 0, 0) == -1 ||
											(node = ft_lstsearch(fd)) == NULL)
		return (-1);
	while ((nl = ft_strchr(node->content, '\n')) == NULL)
	{
		if ((len = read(fd, buf, BUFF_SIZE)) <= 0)
			break ;
		buf[len] = '\0';
		ft_strext((char **)&node->content, buf);
	}
	*line = nl ? ft_strsub(node->content, 0, nl - (char *)node->content) :
					ft_strdup(node->content);
	*(char *)node->content = '\0';
	nl ? ft_strext((char **)&node->content, nl + 1) :
		ft_strext((char **)&node->content, node->content);
	return ((**line == '\0' && !len) ? 0 : 1);
}
