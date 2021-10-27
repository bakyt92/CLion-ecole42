/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:30:59 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:31:00 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (NULL);
	char *dest;
	size_t len1;
	size_t len2;
	size_t i;

	i = 0;
	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = ft_strlen((char *)s1);
	if (s2)
		len2 = ft_strlen((char *)s2);
	dest = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return(NULL);
	while (i < len1)
	{
		dest[i] = s1[i];
		i++;
	}
	while (i < len2 + len1)
	{
		dest[i] = s2[i - len1];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
