/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/19 23:19:39 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/19 23:19:44 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == 0)
		return (0);
	else if (tmp)
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}