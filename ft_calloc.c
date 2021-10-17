#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *place;
    place = malloc(count * size);
    ft_memset(place, 0, count * size);
    return (place);
}
