/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonus_ft_putlist.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts.student@codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/20 11:09:34 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/20 11:09:38 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlist_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
