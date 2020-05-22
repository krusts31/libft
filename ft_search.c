/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_search.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:12:35 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:12:45 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_search(const char *src, const char *set1, int x)
{
	const char	*revsrc;
	const char	*goal;
	int			length;
	int			hit;

	hit = 0;
	revsrc = src;
	length = (ft_strlen(src) - 1);
	while (*revsrc != '\0')
	{
		goal = set1;
		hit = ft_compare(src[length], goal);
		if (hit)
			length = length - hit;
		if (hit == 0)
			return (ft_finish(src, length, x));
		hit = 0;
		revsrc++;
	}
	return (0);
}
