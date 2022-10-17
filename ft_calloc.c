#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(size * nmemb);
	if (!p)
		return (0);
	ft_bzero(p, size * nmemb);
	return (p);
}
