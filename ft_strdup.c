/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:57:05 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/02 14:35:34 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	x;
	size_t	y;

	y = 0;
	x = ft_strlen(s);
	ptr = malloc(x + 1);
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
