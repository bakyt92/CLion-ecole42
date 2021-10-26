#include "libft.h"

//static char **ft_words_write(char *s, char **arr, char c, int num_words)
//{
//	int word_nomer;
//	int i;
//	int word_len;
//
//
//	i = 0;
//	word_nomer = 0;
//
//	while (word_nomer < num_words && s)
//	{
//		while (s[i] == c)
//			i++;
//		word_len = 0;
//		while (s[i + word_len] != c && s[i + word_len] != '\0')
//			word_len++;
//		arr[word_nomer] = ft_substr(s, i, word_len);
//		if(!arr[word_nomer])
//		{
//
//		}
//
//
//	}
//}
//
static int ft_num_words(char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (s[i] != c)
    	j++;
    while (s[i])
    {
    	if (s[i] == c && s[i+1] != c)
            j++;
        i++;
    }
    return (j);
}

char **ft_split(char const *s, char c)
{
    int num_words;
    char **arr;

    arr[0][0] = NULL;
//
    num_words = ft_num_words(s, c);
//    // маллок под
//    // считать количество символов в слове
	arr = (char **)ft_calloc(num_words + 1, sizeof(char *));
//	if (!arr)
//		return (NULL);


	return (arr);
}