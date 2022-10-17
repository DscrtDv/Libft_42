/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 16:29:32 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/13 16:35:48 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char	*temp_h;
	char	*temp_n;

	i = len - ft_strlen(needle) + 1;
	if (!ft_strlen(needle))
		return ((char *) haystack);
	if (ft_strlen(needle) > len || !ft_strlen(haystack))
		return (0);
	while (i-- && *haystack)
	{
		temp_h = (char *)haystack;
		temp_n = (char *)needle;
		while(*temp_n && *temp_n == *temp_h)
		{
			temp_n++;
			temp_h++;
		}
		if (!*temp_n)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
