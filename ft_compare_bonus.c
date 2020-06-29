/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_compare_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:03:48 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/26 14:09:17 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_compare(const char c, const char *z)
{
	size_t	hit;

	hit = 0;
	while (*z != '\0')
	{
		if (c == *z)
			hit++;
		z++;
	}
	return (hit);
}
