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
    unsigned char *dest1;
    unsigned char *src1;

    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    x = 0;
    if (!dest && !src)
		return (NULL);
    while (x < n && *(unsigned char *)src != '\0')
    {
    	*(dest1++) = *(src1++);
        x++;
    }
    return (dest);
}
