/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:30:26 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:30:29 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *first, const char *find, size_t len)
{
    size_t i = 0;
    size_t j;

    if (*find == 0)
		return ((char *)first);
    while (first[i] != '\0' && i < len)
    {
        j = 0;
        while (find[j] != '\0' && first[i+j] == find[j] && (i + j) < len)
            ++j;
        if (find[j] == '\0')
            return ((char *) first + i);
        ++i;
    }
    return (NULL);
}
