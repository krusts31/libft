/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:18:02 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:18:13 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while (n > 0)
	{
		if (d == NULL && s == NULL)
			return (NULL);
		*d = *s;
		d++;
		s++;
		n--;
	}
	if (d == NULL && s == NULL)
		return (NULL);
	return ((void *)dest);
}
