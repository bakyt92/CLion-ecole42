#include "libft.h"

char *ft_strchr(const char *s, int ch)
{
    while (*s != (unsigned char)ch)
    {
        if (*s == '\0')
            return (NULL);
        s++;
    }
    return((char *)s);
}
