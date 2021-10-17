#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int	ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif
