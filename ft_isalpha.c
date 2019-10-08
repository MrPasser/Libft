/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:29:28 by skrasin           #+#    #+#             */
/*   Updated: 2019/09/20 15:34:42 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isupper(int c)
{
	return (c < 91 && c > 64);
}

static	int		ft_islower(int c)
{
	return (c < 123 && c > 96);
}

int				ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
