#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (!s || !f)
        return ;
    int index;
    while (s)
    {
        f(index, s[index]);
        i++;
    }
}
