#include "libft.h"

// эта функция находит первый символ, который необходимо копировать (т.е.
// символ, который не входит в set). Ищет с начала
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
// эта функция находит последний символ, который необходимо копировать в
// новую строку (т.е. символ, который не входит в set. Ищет с конца
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

// сама функция трим.

char *ft_strtrim(char const *s1, char const *set)
{
	size_t begin;
	size_t end;
	size_t i;
	char *s_new;

// проверяем, что строки s1 / set не пустые
	if (!s1 || !set)
		return (NULL);
// если функция ft_begin / ft_end возвращает NULL - то и основная функция
// тоже возвращает NULL. В ином случае функция возвращает индекс первого или
// последнего символа для копирования в новую строку
	if (!ft_begin(s1, set))
		return (NULL);
	else begin = ft_begin(s1, set);
	// я проверял на дебаггере, вроде бы ошибка именно в ft_end
	if (!ft_end(s1, set))
		return (NULL);
	else end = ft_end(s1, set);

// выделяем память, проверяем что выделили
	s_new = (char *) malloc(sizeof(char) * (end - begin + 1));
	if (!s_new)
		return (s_new);
	i = end - begin;
	while (end >= begin)
		s_new[i--] = s1[end--];
	s_new[end - begin] = '\0';
	return (s_new);
}


