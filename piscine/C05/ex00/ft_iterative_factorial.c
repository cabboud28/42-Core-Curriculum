/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:27:17 by cabboud           #+#    #+#             */
/*   Updated: 2025/08/06 19:35:47 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			fact = fact * nb;
			nb--;
		}
	}
	return (fact);
}
