/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amount_of_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:50:37 by skrasin           #+#    #+#             */
/*   Updated: 2020/03/11 12:58:15 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

size_t	ft_num_dig(long int n, int base)
{
	size_t	len;

	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}
