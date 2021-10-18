#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);

	char *dest;
	size_t len1;
	size_t len2;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	dest = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return(NULL);
	while (i <= len1)
		dest[j++] = s1[i++];
	i = 0;
	while (i <= len2)
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}
