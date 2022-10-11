/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:52:38 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 17:02:09 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*rtn;

	rtn = (unsigned char *)s;
	while (n-- > 0)
		rtn[n] = c;
	return (rtn);
}
