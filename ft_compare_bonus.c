/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_compare_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:12:35 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:12:45 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare(const char c, const char *z)
{
	int	hit;

	hit = 0;
	while (*z != '\0')
	{
		if (c == *z)
			hit++;
		z++;
	}
	return (hit);
}