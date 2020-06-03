/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 16:03:06 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/03 14:38:46 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int nr)
{
	int	ret;

	ret = 0;
	if (nr == 0)
		return (1);
	if (nr < 0)
	{
		nr = -nr;
		ret++;
	}
	while (nr >= 1)
	{
		ret++;
		nr = nr / 10;
	}
	return (ret);
}
