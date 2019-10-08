/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:36:51 by skrasin           #+#    #+#             */
/*   Updated: 2019/09/28 19:03:53 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if ((list = (t_list *)malloc(sizeof(t_list))))
	{
		if (!content || !(list->content = malloc(content_size)))
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			list->content_size = content_size;
			list->content = ft_memmove(list->content, content,
				content_size);
		}
		list->next = NULL;
		return (list);
	}
	return (NULL);
}
