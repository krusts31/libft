/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 22:20:43 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 22:21:37 by alkrusts      ########   odam.nl         */
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
		if (str[count] == c)
			return ((char *)str + count);
		count--;
	}
	return (0);
}
