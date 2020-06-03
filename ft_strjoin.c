/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:56:55 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/02 14:36:43 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	if (*s1 || *s2)
	{
		ptr = ft_cpystr(ptr, s1);
		ptr = ft_cpystr(ptr, s2);
		*ptr = '\0';
		while (len)
		{
			ptr--;
			len--;
		}
		return (ptr);
	}
	*ptr = '\0';
	return (ptr);
}
