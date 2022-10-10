/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 12:28:47 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/10 12:32:21 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;

	temp_dest = (char *) dest;
	temp_src = (char *) src;
	if ((temp_dest == 0) || (temp_src == 0) || n == 0)
		return (dest);
	if (temp_src < temp_dest && temp_dest < temp_src + n)
	{
		while (n--)
			temp_dest[n] = temp_src[n];
	}
	else
	{
		while (n--)
		{
			*(temp_dest++) = *(temp_src++);
		}
	}
	return (dest);
}
