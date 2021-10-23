#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s1;
    unsigned char *d1;

    if (!dst && !src)
    	return (NULL);
    s1 = (unsigned char*)src;
    d1 = (unsigned char*)dst;
    if (d1 < s1)
    {
        while (len-- > 0)
            *(d1++) = *(s1++);
    }
    else
    {
    	while (len > 0)
    	{
    		d1[len-1]=s1[len-1];
    		len--;
    	}
    }
	return (dst);
}