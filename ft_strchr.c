/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:57:13 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 15:57:17 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == c)
			return ((char *)str + count);
		count++;
	}
	if (str[count] == c)
		return ((char *)str + count);
	return (0);
}
