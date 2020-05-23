/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:57:05 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 15:57:07 by alkrusts      ########   odam.nl         */
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
