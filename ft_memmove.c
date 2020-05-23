/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:59:34 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 15:59:36 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			x;
	char		*desa;
	const char	*gala;

	x = n - 1;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		desa = dest;
		gala = src;
		while (x > 0)
		{
			desa++;
			gala++;
			x--;
		}
		ft_memrcpy(desa, gala, n);
	}
	else if (dest == 0 && src == 0)
		return (0);
	return ((void *)dest);
}
