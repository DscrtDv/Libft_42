#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;
	
	len = ft_strlen(s) + 1;
	p = malloc(len);
	if (!p)
		return (0);
	ft_strlcpy(p, s, len);
	return (p);
}
