#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	size_t pos;
	size_t i;

	i = 0;
	pos = 0;
	dest = (char*)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	while (*s != '\0' && pos <= (len + start))
	{
		if (pos >= start && i <= len)
		{
			dest[i] = s[pos];
			++i;
		}
		++pos;
		dest[i] = '\0'
		return(dest);
	}




}