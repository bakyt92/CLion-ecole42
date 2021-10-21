#include "libft.h"

static int ft_znak(const char *str, int i)
{
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			return(-1);
		++i;
	}
	return (1);
}

static int ft_subatoi (const char *str, int i, int znak)
{
	int res;
	int star_res;
	int counter;

	res = 0;
	counter = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		star_res = res;
		res = res * 10;
		res = res + (str[i] - '0') * znak;
		if ((res >= 0 && star_res < 0) || (res < 0 && star_res >= 0))
		{
			counter = znak + counter;
			if (counter == 8 || counter == -9)
				return (0 - (counter > 0));
		}
		++i;
	}
	return(res);
}

int ft_atoi(const char *str)
{
	int i;
    int res;
    int znak;

    i = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
        ++i;
    znak = ft_znak(str, i);
    i += 1;
    res = ft_subatoi (str, i, znak);
    return (res);
}