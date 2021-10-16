//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//
//char *ft_strnstr(char *first, const char *find, size_t len)
//{
//    size_t i = 0;
//    size_t j;
//    while (first[i] != '\0' && i < len)
//    {
//        j = 0;
//        while (find[j] != '\0' && first[i+j] == find[j] && (i + j) < len)
//            ++j;
//        if (find[j] == '\0')
//            return ((char *) first + i);
//        ++i;
//    }
//    return (NULL);
//}
//
//int main (void)
//{
//    size_t len;
//    char s1[] = "asdfghjc453";;
//    char s2[] = "df";
//    len = 10;
//    printf("Результат: %s", ft_strnstr(s1, s2, len));
//    return(0);
//}
