/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:56:48 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 16:57:20 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int main()
{
    char *ztr = "patates";

    printf("%d\n", ft_strlen(ztr));

    return (0);
}
*/
