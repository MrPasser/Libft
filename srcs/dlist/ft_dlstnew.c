/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:36:51 by skrasin           #+#    #+#             */
/*   Updated: 2020/09/22 15:15:42 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include "ft_memory.h"
#include <sys/_types/_null.h>

t_dlist	*ft_lstnew(void const *content, size_t content_size)
{
	t_dlist *list;

	if ((list = (t_dlist *)ft_memalloc(sizeof(t_dlist))) == NULL ||
						(((*list).content = ft_memalloc(content_size)) == NULL))
		return (NULL);
	if (content == NULL)
		return (list);
	list->content_size = content_size;
	list->content = ft_memcpy(list->content, content, content_size);
	list->next = NULL;
	list->prev = NULL;
	return (list);
}
