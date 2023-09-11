/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_freearr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tcensier <tcensier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 13:43:06 by tcensier      #+#    #+#                 */
/*   Updated: 2023/09/11 13:43:29 by tcensier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_array(char **array)
{
	size_t	i;

	i = 0;
	if (array == NULL)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}