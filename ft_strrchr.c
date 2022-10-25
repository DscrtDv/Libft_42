/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:59:39 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/25 09:15:32 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;

	index = ft_strlen(s);
	if (!(unsigned char)c)
		return ((char *)&s[index]);
	while (index--)
		if (s[index] && s[index] == (unsigned char) c)
			return ((char *)&s[index]);
	return (NULL);
}
