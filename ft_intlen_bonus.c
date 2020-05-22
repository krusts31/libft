/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.studnet@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:06:52 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:07:02 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int nr)
{
	int ret;

	ret = 0;
	if (nr == 0)
		return (1);
	if (nr < 0)
		nr = -nr;
	while (nr >= 1)
	{
		ret++;
		nr = nr / 10;
	}
	return (ret);
}
