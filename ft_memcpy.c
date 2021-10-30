/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:29:09 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:29:10 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t x;
    char *dest1;
    char *src1;

    dest1 = (char *)dest;
    src1 = (char *)src;
    if (!dest && !src)
		return (NULL);
    x = 0;
    while (x < n)
    {
    	*dest1++ = *src1++;
        x++;
    }
    return (dest);
}
