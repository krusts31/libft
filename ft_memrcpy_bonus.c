/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memrcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:18:02 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:18:13 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memrcpy(char *dest, const char *src, size_t x)
{
	while (x > 0)
	{
		*dest = *src;
		dest--;
		src--;
		x--;
	}
	return (dest);
}
