/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:31:55 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:31:56 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *l;
    l = (unsigned char*)s;
    size_t x;
    x = 0;
    while (x < n)
    {
        *l = c;
        l++;
        x++;
    }
    return (s);
}
