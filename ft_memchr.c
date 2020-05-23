/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:00:04 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 16:00:05 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*x;
	unsigned char		z;

	x = (const void *)s;
	z = c;
	if (z == '\0')
	{
		while (*x != '\0')
			x++;
		return (void *)x;
	}
	while (*x != '\0' && n > 0)
	{
		if (*x == z)
			return (void *)x;
		x++;
		n--;
	}
	return (0);
}
