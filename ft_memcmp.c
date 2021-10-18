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
