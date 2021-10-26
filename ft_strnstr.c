#include "libft.h"

char *ft_strnstr(const char *first, const char *find, size_t len)
{
    size_t i = 0;
    size_t j;

    if (*find == 0)
		return ((char *)first);
    while (first[i] != '\0' && i < len)
    {
        j = 0;
        while (find[j] != '\0' && first[i+j] == find[j] && (i + j) < len)
            ++j;
        if (find[j] == '\0')
            return ((char *) first + i);
        ++i;
    }
    return (NULL);
}