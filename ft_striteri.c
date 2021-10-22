#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (!s || !f)
        return ;
    int index;

    index = 0;
    while (s[index])
    {
    	f(index, &s[index]);
    	index++;
    }
}
