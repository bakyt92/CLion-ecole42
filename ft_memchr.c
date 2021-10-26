#include "libft.h"

void *ft_memchr (const void *arr, int c, size_t n)
{
	unsigned char *str;
	unsigned char symbol;

	str = (unsigned char *)arr;
	symbol = (unsigned char)c;
	while (n--)
	{
		if (*str == symbol)
			return ((void *)str);
		str++;
	}
	return ((void *)0);
}