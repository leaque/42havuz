/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 19:31:21 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 19:33:31 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;
	char	*buffer;

	buffer = (char *)s;
	counter = 0;
	while (counter < n)
	{
		if (buffer[counter] == c)
			return ((void *)(s + counter));
		counter++;
	}
	return (NULL);
}
