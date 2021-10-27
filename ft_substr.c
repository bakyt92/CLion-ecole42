/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:29:45 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:29:46 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	size_t pos;
	size_t i;

	i = 0;
	pos = 0;
	if(s == NULL)
		return (NULL);
	if (ft_strlen(s) <= (size_t) start)
		return (ft_strdup(""));
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (*s != '\0' && pos <= (len + start))
	{
		if (pos >= start && i < len)
		{
			dest[i] = s[pos];
			++i;
		}
		++pos;
	}
	dest[i] = '\0';
	return(dest);
}
