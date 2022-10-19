
#include "libft.h"

int		checkset(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return(1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	*start;
	char	*end;

	if (!s1 || !set)
		return(0);
	start = (char *) s1;
	end = start + ft_strlen(s1);
	set = set;
	while(*start && checkset(*start, set))
		start++;
	while(end > start && checkset(*(end - 1), set))
		end--;
	return (ft_substr(start, 0, end - start));
}
