/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:31:07 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:31:08 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t i;
    i = 0;
    char *dest;
    dest = (char *)malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
    if (!dest)
		return (NULL);
    while (s[i] != '\0')
    {
        dest[i] = s[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}
