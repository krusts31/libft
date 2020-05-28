/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:55:30 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/28 15:49:09 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	while (count >= 0)
	{
		if (str[count] == (char)c)
			return ((char *)str + count);
		count--;
	}
	return (0);
}
