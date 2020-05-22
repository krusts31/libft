/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonus_ft_putchar.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:08:53 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:08:57 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}
