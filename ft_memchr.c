/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:00:04 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/28 15:38:17 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		x;

	x = 0;
	src = s;
	while (x < n)
	{
		if (src[x] == (char)c)
			return ((char *)s + x);
		x++;
	}
	return (NULL);
}
