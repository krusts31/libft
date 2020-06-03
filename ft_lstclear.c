/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:01:34 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/31 15:19:10 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *now;

	if (del == NULL)
		return ;
	while (*lst)
	{
		now = *lst;
		ft_lstdelone(*lst, *del);
		*lst = now->next;
	}
}
