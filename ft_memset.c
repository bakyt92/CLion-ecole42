#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *l;
    l = (unsigned char*)s;
    size_t x;
    x = 0;
    while (x < n)
    {
        *l = c;
        l++;
        x++;
    }
    return (s);
}
