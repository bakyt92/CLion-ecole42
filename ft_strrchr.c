#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	int i;

	i = 0;
	while (s[i])
	{
		if (*s == c)
			str = (char*) s + i;
		i++;
	}
	return ((char *)s);
}