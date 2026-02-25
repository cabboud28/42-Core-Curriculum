/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:05:33 by cabboud           #+#    #+#             */
/*   Updated: 2025/08/06 22:18:58 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = nb;
	p = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
	{
		while (p < power)
		{
			nb = nb * i;
			p++;
		}
	}
	return (nb);
}
