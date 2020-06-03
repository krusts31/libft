/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:02:43 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/05/23 16:02:46 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argument)
{
	if ((argument >= 'A' && argument <= 'Z')
			|| (argument >= 'a' && argument <= 'z'))
		return (1);
	else
		return (0);
}
