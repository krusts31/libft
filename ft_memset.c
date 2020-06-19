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

void	*memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		((char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
