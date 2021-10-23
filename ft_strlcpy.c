#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t count;
    size_t x;
    count = 0;
    while (src[count] != '\0')
        ++count;

    x = 0;
    while (src[x] != '\0' && (n - 1) > x)
    {
        dst[x] = src[x];
        ++x;
    }
    dst[x] = '\0';
    return (count);
}
//
//int main (void)
//{
//    char s1[] = "He5398ll423no";
//    char s2[] = "*4*88908";
//    size_t n;
//    n = 5;
//    printf("Результат1: %d", ft_strlcpy(s1, s2, n));
//    printf("\n Newline");
//    printf("Результат1: %s", s1);
//    return(0);
//}