#include "libft.h"

static size_t ft_begin(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = 0;

	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j])
		{
			if (set[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return ((int)(void *)0);
}

static size_t ft_end(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	i = 0;
	j = 0;

	i = ft_strlen((char*)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] || set[j])
		{
			if (!set[j])
				return (i);
			j++;
		}
		i--;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t begin;
	size_t end;
	size_t i;
	char *s_new;

	if (!s1 || !set)
		return (NULL);
	if (!ft_begin(s1, set))
		return (NULL);
	else begin = ft_begin(s1, set);
	if (!ft_end(s1, set))
		return (NULL);
	else end = ft_end(s1, set);
	s_new = (char *) malloc(sizeof(char) * (end - begin + 1));
	if (!s_new)
		return (s_new);
	i = end - begin;
	while (end >= begin)
		s_new[i--] = s1[end--];
	s_new[end - begin] = '\0';
	return (s_new);
}


