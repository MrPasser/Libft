/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:26:31 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/20 10:44:04 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <sys/_types/_null.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst == NULL)
		alst = &new;
	else
		if (new != NULL)
		{
			new->next = *alst;
			*alst = new;
		}
}
