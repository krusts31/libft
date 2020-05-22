/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:12:18 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:12:23 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void				*p;
	const unsigned char	*x;
	unsigned char		z;

	z = c;
	x = src;
	p = ft_memchr(src, c, n);
	if (p != NULL && n > 0)
	{
		ft_memcpy(dest, src, p - src + 1);
		while (*x != z)
		{
			dest++;
			x++;
		}
		dest++;
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (0);
}
