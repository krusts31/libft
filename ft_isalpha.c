/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:12:18 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:12:23 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if ((argument >= 'A' && argument <= 'Z')
			|| (argument >= 'a' && argument <= 'z'))
		return (1);
	else
		return (0);
}
