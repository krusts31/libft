/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.stduent@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 12:48:14 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 22:11:07 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	else
		return (c);
}