#include "libft.h"
#include <stddef.h>

size_t	ft_splitcount(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while(*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	result = (char **)malloc(sizeof(char *) * ft_splitcount(s, c) + 1);
	if (!result)
		return(0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while(*s && *s != c && len++)
				s++;
			result[i++] = ft_substr(s-len, 0, len); 
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}
