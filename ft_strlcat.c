#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

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

int main (void)
{
    char s1[] = "He5398ll423no";
    char s2[] = "12345";
    size_t n;
    n = 230;
//    printf("Результат0: %s", s1);
//    size_t m = strlcat(s1, s2, n);
//    printf("Результат1: %d", m);
//    printf("\nРезультат2: %s", s1);
    printf("Результат0: %s", s1);
    printf("\nРезультат1: %d", ft_strlcat(s1, s2, n));
    printf("\nNewline");
    printf("\nРезультат2: %s", s1);
    return(0);
}
