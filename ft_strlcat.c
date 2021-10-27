/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:30:54 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:30:55 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char *d;
    size_t a;
    size_t b;
    a = 0;
    b = 0;
    d = (char*)src;

    while (dst[a] != '\0' && dstsize > a)
        ++a;
    while (src[b] != '\0' && (a+b+1) < dstsize)
    {
        dst[a+b] = src[b];
        ++b;
    }
    if (a < dstsize)
    {
        dst[a+b] = '\0';
        return (a+ft_strlen(d));
    }
    else return (dstsize+ft_strlen(src));
}
//
//int main (void)
//{
//    char s1[] = "He5398ll423no";
//    char s2[] = "12345";
//    size_t n;
//    n = 120;
////    printf("Результат0: %s", s1);
////    size_t m = strlcat(s1, s2, n);
////    printf("Результат1: %d", m);
////    printf("\nРезультат2: %s", s1);
//    printf("Результат0: %s", s1);
//    printf("\nРезультат1: %d", ft_strlcat(s1, s2, n));
//    printf("\nNewline");
//    printf("\nРезультат2: %s", s1);
//    return(0);
//}
