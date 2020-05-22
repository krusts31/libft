/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_finish_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:13:50 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:13:55 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skip(const char *s1, int x)
{
	char	*str1;

	str1 = (char *)s1;
	while (x > 0)
	{
		str1++;
		x--;
	}
	return (str1);
}

char	*ft_finish(const char *src, int lenght, int x)
{
	char	*dest;
	int		size;
	int		y;

	size = (ft_strlen(src) - ((ft_strlen(src) - lenght) + x));
	if (size <= 0)
		return ("");
	dest = ft_calloc(size + 2, sizeof(char));
	if (dest == 0)
		return (0);
	src = (const char *)ft_skip(src, x);
	y = 0;
	while (size + 1 > 0)
	{
		dest[y] = *src;
		y++;
		src++;
		size--;
	}
	dest[y] = '\0';
	return (dest);
}