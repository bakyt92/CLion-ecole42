#include "libft.h"

int ft_isalpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return (0);
    else return (1);
}