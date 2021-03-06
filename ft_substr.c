/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:29:45 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/31 00:29:59 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_dest(char const *s, char *dest, size_t len, unsigned int start)
{
	size_t	i;
	size_t	pos;

	pos = 0;
	i = 0;
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
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= len)
		len = ft_strlen(s);
	if (ft_strlen(s) <= (size_t) start)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_dest(s, dest, len, start);
	return (dest);
}
