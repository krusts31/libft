/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:35:12 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/29 16:08:54 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_extension(char *ps, int nr, int y, int strlen)
{
	ps = ft_strhop_toend(ps, strlen);
	while (nr > 0)
	{
		ps--;
		*ps = nr % 10 + '0';
		nr = nr / 10;
	}
	if (y > 0)
		ps--;
	return (ps);
}

static char	*ft_handel(int num)
{
	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char		*ft_itoa(int n)
{
	int		slen;
	char	*ret;
	int		x;

	if (n == -2147483648 || n == 0)
		return (ft_handel(n));
	slen = ft_intlen(n);
	ret = ft_calloc(slen + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	x = 0;
	if (n < 0)
	{
		n = -n;
		*ret = '-';
		x = 1;
	}
	return (ft_itoa_extension(ret, n, x, slen));
}
