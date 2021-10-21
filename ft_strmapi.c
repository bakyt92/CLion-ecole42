#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    unsigned int number;

    number = ft_strlen((char*)s);
    i = 0;
    if (!s || !f)
        return (NULL);
    str = (char *) malloc (sizeof (char) * number);
    if (!str)
        return (NULL);
    while (s)
    {
        str[i] = f(i,s[i])
        i++;
    }
    str[i] = '\0';
    return (str);
}