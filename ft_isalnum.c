/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gkoylu <gkoylu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:42:43 by gkoylu        #+#    #+#                 */
/*   Updated: 2022/10/11 16:44:31 by gkoylu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90))))
		return (0);
	else
		return (1);
}

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) == 1) || (ft_isalpha(c) == 1))
		return (1);
	else
		return (0);
}
