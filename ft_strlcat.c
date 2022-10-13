/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 10:25:29 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/13 11:38:56 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	temp;

	i = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	temp = ft_strlcpy(dst, src, dstsize - i);
	return (i + temp);
}
