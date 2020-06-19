/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:57:32 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/02 14:23:53 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (s == NULL)
		return (NULL);
	ptr = ft_malloc1dim(s, c);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_malloc2dim(s, c, ptr);
	ptr = ft_init_mem(s, c, ptr);
	return (ptr);
}
