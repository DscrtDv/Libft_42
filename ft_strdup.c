/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 13:00:40 by tcensier      #+#    #+#                 */
/*   Updated: 2022/10/25 11:09:05 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s) + 1;
	p = malloc(sizeof(char) * len);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, len);
	return (p);
}
