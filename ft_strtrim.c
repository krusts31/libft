/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:55:04 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/23 13:28:56 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		hit;
	const char	*holdsrc;
	size_t		x;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	x = 0;
	holdsrc = s1;
	while (*holdsrc != '\0')
	{
		hit = ft_compare(*holdsrc, set);
		if (hit)
			x = x + hit;
		if (hit == 0)
			return (ft_search(s1, set, (int)x));
		holdsrc++;
	}
	return (ft_strdup(holdsrc));
}
