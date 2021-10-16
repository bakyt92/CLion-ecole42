#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s1;
    s1 = (unsigned char*)src;
    unsigned char *d1;
    d1 = (unsigned char*)dst;

    if (d1 < s1)
    {
        while (len-- > 0)
            d1 = s1;
    }
        else
        {
            while (len > 0)
            {
                d1[len-1]=s1[len-1];
                len--;
            }
        }
    return (dst);
}

int main (void)
{
    char s1[] = "He5398ll423no";
    char s2[] = "*4*88908";
    size_t n;
    n = 3;
    printf("Результат1: %s", s1);
    printf("\n Newline");
    *ft_memmove(s1, s2, n);
    printf("Результат2: %s", s1);
    return(0);
}