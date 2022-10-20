/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 16:29:32 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/20 20:01:19 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;

	if (!needle)
		return ((char *)haystack);
	if (len <= 0)
		return (NULL);
	n_len = ft_strlen(needle);
	while ((len - n_len + 1 > 0 && *haystack))
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}

/*
int main(void)
{
	printf("I dont crash hein: %s \n", ft_strnstr(((void *)0), "fake", 3));
	printf("But you do: %s \n", strnstr(((void *)0), "fake", 3));
	return (0);
}
*/
