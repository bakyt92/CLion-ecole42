//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//
//void ft_bzero(void *s, size_t n)
//{
//    unsigned char *l;
//    l = (unsigned char*)s;
//    size_t x;
//    x = 0;
//    while (x < n && *l != '\0')
//    {
//        *l = 0;
//        l++;
//        x++;
//    }
//}
//
//int main (void)
//{
//    void *s1 = "He5398ll423no";
//
//    size_t n;
//    n = 7;
//
//    printf("Результат1: %s", s1);
//    printf("\n Newline");
//    ft_bzero(s1, n);
//    printf("Результат2: %s", s1);
//    return(0);
//}