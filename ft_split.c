/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 11:19:17 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/22 12:59:51 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**splitalloc(const char *s, char c)
{
	size_t	count;
	char	**result;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	result = malloc(sizeof(char *) * (count + 1));
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	t_len;
	size_t	i;

	result = splitalloc(s, c);
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			t_len = 0;
			while (*s && *s != c && ++t_len)
				++s;
			result[i++] = ft_substr(s - t_len, 0, t_len);
		}
		else
			++s;
	}
	result[i++] = 0;
	return (result);
}
