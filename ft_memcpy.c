/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 13:09:09 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/10 12:29:23 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dest;
	s = (const char *) src;
	if (!s && !d)
		return (0);
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
