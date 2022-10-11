/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 17:04:23 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 19:00:17 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (nb-- > 0 && *src)
		*p++ = *src++;
	*p = 0;
	return (dest);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	bytes;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	bytes = dstsize - dstlen - 1;
	ft_strncat(dst, (char *)src, bytes);
	return (dstlen + srclen);
}