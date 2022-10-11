/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:47:51 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 16:51:42 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, void const *restrict src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s == NULL || d == NULL)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (n == i)
			return (d);
	}
	return (d);
}
