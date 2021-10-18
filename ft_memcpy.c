#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t x;
    x = 0;
    while (x < n)
    {
        *(unsigned char *) dest++ = *(unsigned char *) (++src);
        x++;
    }
    return (dest);
}
