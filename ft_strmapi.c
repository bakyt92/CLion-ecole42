#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    unsigned int number;

    if (!s || !f)
    	return (NULL);
    number = ft_strlen((char*)s);
    i = 0;

    str = (char *) malloc (sizeof (char) * (number + 1));
    if (!str)
    	return (NULL);
    while (s[i])
    {
    	str[i] = f(i,s[i]);
    	i++;
    }
    str[i] = '\0';
    return (str);
}