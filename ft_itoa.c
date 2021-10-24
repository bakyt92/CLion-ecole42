/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:52:21 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/24 03:52:28 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int numbers(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *res;
	int i;

	i = numbers(n);
	res = (char*)malloc(sizeof(char) * (i + 1 + (n<0));
	if (!res)
		return (res);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 10)
	{
		ft_itoa(n/10)
	}
	res
}
