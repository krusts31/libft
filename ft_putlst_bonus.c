/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putlist_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:58:20 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/23 09:39:24 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
