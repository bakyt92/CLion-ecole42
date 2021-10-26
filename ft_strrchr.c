#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;

	str = (void *)0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			str = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (str);
}