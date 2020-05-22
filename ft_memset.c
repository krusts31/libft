/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:16:58 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:17:16 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t y)
{
	size_t	i;

	i = 0;
	while (y > i)
	{
		((char *)str)[i] = (unsigned char)x;
		i++;
	}
	return (str);
}
