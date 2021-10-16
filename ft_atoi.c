//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//
//int ft_atoi(const char *str)
//{
//    long i;
//    long res;
//    res = 0;
//    int znak;
//    i = 0;
//
//    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
//        ++i;
//    if (str[i] == '+' || str[i] == '-')
//    {
//        if (str[i] == '-')
//            znak = -1;
//    ++i;
//    }
//    while (str[i] >= '0' && str[i] <= '9')
//    {
//        res = res * 10 + str[i] - '0';
//        ++i;
//    }
//    return (res*znak);
//}
//
//int main(void)
//{
//    printf("Result: %d\n", ft_atoi("\t-245"));
//    return (0);
//}