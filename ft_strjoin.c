/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:56:55 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 15:56:58 by alkrusts      ########   odam.nl         */
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
