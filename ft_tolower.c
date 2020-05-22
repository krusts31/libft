/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.stdunet@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 12:49:00 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 22:12:34 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
