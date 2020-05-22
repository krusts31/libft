/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:07:55 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/22 08:08:11 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	if (*s1 || *s2)
	{
		ptr = ft_strcpy(ptr, s1);
		ptr = ft_strcpy(ptr, s2);
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
