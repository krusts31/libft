/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:58:03 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/29 12:04:50 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	if (str == NULL)
		return ;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
