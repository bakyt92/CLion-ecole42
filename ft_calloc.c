#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *place;
    unsigned int total;
    total = count * size;
    place = malloc(total);
    if(place == NULL)
    	return (NULL);
    ft_memset(place, 0, total);
    return (place);
}
