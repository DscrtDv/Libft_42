/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 08:42:20 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/13 10:25:13 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	while (*src && i + 1 < dstsize)
	{
		*dest++ = *src++;
		i++;
	}
	if (i < dstsize)
		*dest = '\0';
	while (*src++)
		i++;
	return (i);
}
