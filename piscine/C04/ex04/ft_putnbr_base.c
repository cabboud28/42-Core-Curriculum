/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:29:44 by cabboud           #+#    #+#             */
/*   Updated: 2025/08/05 19:07:59 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	n;
	int		i;
	char	b[30];

	i = 0;
	size = ft_strlen(base);
	n = nbr;
	if (!ft_check_base(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		b[i] = b[n % size];
		n = n / size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(b[i]);
}
