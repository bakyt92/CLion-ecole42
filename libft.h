#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isalnum (int ch);
int	ft_isascii(int ch);
int	ft_isprint(int ch);
int ft_toupper (int ch);
int ft_tolower (int ch);

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);
void *ft_memset(void *s, int c, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strchr(const char *s, int ch);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp (const void *arr1, const void *arr2, size_t n);
char *ft_strdup(const char *s);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
char *ft_strnstr(char *first, const char *find, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t n);


typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
t_list *ft_lstnew(void *content);


#endif
