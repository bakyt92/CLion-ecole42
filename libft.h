#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isalnum (int ch);
int	ft_isascii(char ch);
int	ft_isprint(char ch);

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);
void *ft_memset(void *s, int c, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strchr(const char *s, int ch);

void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp (const void *arr1, const void *arr2, size_t n);
char *ft_strdup(const char *s);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif
