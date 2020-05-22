/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 22:17:47 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 22:18:25 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *ptr, int number)
{
	int	loop;

	loop = number;
	while (loop > 0)
	{
		ptr++;
		loop--;
	}
	return (ptr);
}
