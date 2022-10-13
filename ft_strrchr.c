/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:59:39 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/13 14:28:41 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	temp;

	temp = c;
	p = 0;
	while (*s != '\0')
	{
		if (*s == temp)
			p = (char *) s;
		s++;
	}
	if (!temp && *s == '\0')
		return (p = (char *)s);
	return (p);
}
