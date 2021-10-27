/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:30:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:30:41 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    unsigned int number;

    if (!s || !f)
    	return (NULL);
    number = ft_strlen((char*)s);
    i = 0;

    str = (char *) malloc (sizeof (char) * (number + 1));
    if (!str)
    	return (NULL);
    while (s[i])
    {
    	str[i] = f(i,s[i]);
    	i++;
    }
    str[i] = '\0';
    return (str);
}
