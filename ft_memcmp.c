#include "libft.h"

int ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
    char *s1;
    char *s2;
    size_t x;

    s1 = (char*)arr1;
    s2 = (char*)arr2;
    x = 0;
    while (x < n)
    {
        if (s1[x] != s2[x])
        	return (s1[x] - s2[x]);
        ++x;
    }
    return (0);
}

//
//int main (void)
//{
//    char s1[] = "He5398ll423no";
//    const char s2[] = "dadr3Hd5398ll423no";
//
//    size_t n;
//    n = 3;
//
//    printf("Результат1: %s", s1);
//    printf("\n Newline");
//    printf("Результат2: %s", ft_memcpy(s1, s2, n));
//    return(0);
//}