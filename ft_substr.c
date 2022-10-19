#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	/* s : string from which to create substring
	 * start : start index of s
	 * len : max length of sub
	 * returns: substring or NULL if failed to allocate
	 */

	char	*sub_s;
	
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		len = 0;
		start = 0;
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub_s = malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (0);
	ft_strlcpy(sub_s, s + start, len + 1);
	return (sub_s);
}
