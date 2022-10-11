/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:58:12 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 16:59:03 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lst;

	lst = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lst = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (lst);
}

/*
int main()
{
    char *ztr = "abcdefcghj\0";

    printf("%s\n", ft_strrchr(ztr, 'c'));
    printf("%s\n", strrchr(ztr, 'c'));


    return 0;
}
*/