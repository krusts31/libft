/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:09:01 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:09:09 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		x;
	int		y;

	y = 0;
	x = ft_strlen(s);
	x++;
	ptr = malloc(x);
	if (ptr == NULL)
		return (NULL);
	while (s[y])
	{
		ptr[y] = s[y];
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}
