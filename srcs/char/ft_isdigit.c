/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:09:48 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/06 13:39:03 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

//While designing ASCII they also chose "00110000" (48) for character zero. This is even more impressive than "a is 1" since you can then XOR any character with the value of character zero to find out if it's a decimal number (0 through 9)! :)
