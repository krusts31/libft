/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 22:13:24 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 22:14:28 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	x;

	if (s == NULL)
		return (NULL);
	x = ft_strlen((char *)s);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (x - start < len)
		len = x - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memmove(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
