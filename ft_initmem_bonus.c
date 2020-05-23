/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initmem_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:03:20 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 16:03:24 by alkrusts      ########   odam.nl         */
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
