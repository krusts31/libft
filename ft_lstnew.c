/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:00:48 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/23 10:46:27 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	else if (tmp)
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}
