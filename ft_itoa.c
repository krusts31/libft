/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:35:12 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/03 15:41:18 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_edgecase(void)
{
	char	*p;

	p = malloc(12);
	if (p == 0)
		return (0);
	p[0] = '-';
	p[1] = '2';
	p[2] = '1';
	p[3] = '4';
	p[4] = '7';
	p[5] = '4';
	p[6] = '8';
	p[7] = '3';
	p[8] = '6';
	p[9] = '4';
	p[10] = '8';
	p[11] = '\0';
	return (p);
}

static char	*ft_itoa_extension(char *ps, int nr, int y, int strlen)
{
	if (nr == 0)
	{
		ps = malloc(2);
		if (ps == 0)
			return (0);
		ps[0] = '0';
		ps[1] = '\0';
		return (ps);
	}
	ps = ft_strrev(ps, strlen);
	*ps = '\0';
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

char		*ft_itoa(int n)
{
	int		slen;
	char	*ret;
	int		x;

	if (n == -2147483648)
	{
		ret = ft_itoa_edgecase();
		return (ret);
	}
	x = 0;
	slen = ft_intlen(n);
	ret = malloc(slen + 1);
	if (ret == 0)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		*ret = '-';
		x = 1;
	}
	ret = ft_itoa_extension(ret, n, x, slen);
	return (ret);
}
