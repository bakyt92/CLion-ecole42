/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:28:59 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:29:00 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr (const void *arr, int c, size_t n)
{
	unsigned char *str;
	unsigned char symbol;

	str = (unsigned char *)arr;
	symbol = (unsigned char)c;
	while (n--)
	{
		if (*str == symbol)
			return ((void *)str);
		str++;
	}
	return ((void *)0);
}
