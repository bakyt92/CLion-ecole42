#include "libft.h"

static int ft_num_words(char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
            j++;
        i++;
    }
    return (i);
}



char **ft_split(char const *s, char c)
{
    int num_words;

    num_words = ft_num_words(s, c);

}