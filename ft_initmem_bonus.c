/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonus_ft_initmem.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:06:52 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:07:02 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_initmem(char const *s, char c, char **ptr)
{
	int	a;
	int	b;
	int	x;

	x = 0;
	b = 0;
	a = 0;
	while (s[a] != '\0')
	{
		while (s[a] != c && s[a] != '\0')
		{
			ptr[b][x] = s[a];
			x++;
			a++;
		}
		if (x > 0)
		{
			b++;
			x = 0;
		}
		else
			a++;
	}
	return (ptr);
}
