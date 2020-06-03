/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkrusts <alkrusts@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/23 15:53:07 by alkrusts      #+#    #+#                 */
/*   Updated: 2020/06/03 14:37:00 by alkrusts      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;
	int	max;

	negative = 1;
	res = 0;
	max = 2147483647;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if (max < 1 && negative < 0)
			return (0);
		else if (max < 1 && negative > 0)
			return (-1);
		max = max / 10;
		++str;
	}
	return (res * negative);
}
