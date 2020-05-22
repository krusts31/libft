/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_spilt_check_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.stduent@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:10:13 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:10:18 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_spilt_check(char ***ptr)
{
	int	x;

	x = 0;
	while ((*ptr)[x])
	{
		free((*ptr[x]));
		x++;
	}
	free(*ptr);
	return (NULL);
}
