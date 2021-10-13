//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//
//void *ft_memcpy(void *dest, const void *src, size_t n)
//{
//    size_t x;
//    x = 0;
//    while (x < n)
//    {
//        *(unsigned char *) dest++ = *(unsigned char *) (++src);
//        x++;
//    }
//    return (dest);
//}
//
//int main (void)
//{
//    char s1[] = "He5398ll423no";
//    const char s2[] = "dadr3Hd5398ll423no";
//
//    size_t n;
//    n = 3;
//
//    printf("Результат1: %s", s1);
//    printf("\n Newline");
//    printf("Результат2: %s", ft_memcpy(s1, s2, n));
//    return(0);
//}