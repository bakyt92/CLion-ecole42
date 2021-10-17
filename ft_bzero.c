#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *l;
    l = (unsigned char*)s;
    size_t x;
    x = 0;
    while (x < n)
    {
        *l = '\0';
        l++;
        x++;
    }
}
