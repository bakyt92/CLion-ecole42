#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *l;
    l = (unsigned char*)s;
    size_t x;
    x = 0;
    while (x < n)
    {
        *l = '\0';
        l++;
        x++;
    }
}

int main (void)
{
    char s1[] = "He5398ll423no";
    char s2[] = "He5398ll423no";

    size_t n;
    n = 20;

    printf("\n *****FT_BZERO****** \n");
    printf("Результат ft_bzero1: %s", s1);
    printf("\n  \n");
    ft_bzero(s1, n);
    printf("Результат ft_bzero2: %s", s1);
    printf("\n");
    return(0);
}