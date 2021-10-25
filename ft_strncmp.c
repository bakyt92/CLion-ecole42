#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t x;
    x = 0;
    while (*s1 != '\0' && x < n && s1 != s2)
    {
        s1++;
        s2++;
        x++;
    }
    return (*s1 - *s2);
}