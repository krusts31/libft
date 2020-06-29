/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:00:12 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/23 11:03:03 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			x;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		if (d[x] == (unsigned char)c)
			return ((void *)d + x + 1);
		x++;
	}
	return (NULL);
}
