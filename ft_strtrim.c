/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 22:15:31 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 22:16:36 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int			hit;
	const char	*holdsrc;
	int			x;

	if (*s1 == '\0')
		return ("");
	x = 0;
	holdsrc = s1;
	while (*holdsrc != '\0')
	{
		hit = ft_compare(*holdsrc, set);
		if (hit)
			x = x + hit;
		if (hit == 0)
			return (ft_search(s1, set, x));
		holdsrc++;
		hit = 0;
	}
	return ("");
}
