#include "libft.h"

void *ft_memchr (const void *arr, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return ((void *)0);
	while (i < n && ((unsigned char *)arr)[i])
	{
		if (((unsigned char *)arr)[i] == (unsigned char) c)
			return (((void *)arr + i));
		i++;
	}
	return ((void *)0);
}