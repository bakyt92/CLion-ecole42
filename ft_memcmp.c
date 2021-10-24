#include "libft.h"

int ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t x;

    s1 = (unsigned char*)arr1;
    s2 = (unsigned char*)arr2;
    x = 0;
    while (x < n)
    {
        if (s1[x] != s2[x])
        	return (s1[x] - s2[x]);
        x++;
    }
    return (0);
}
