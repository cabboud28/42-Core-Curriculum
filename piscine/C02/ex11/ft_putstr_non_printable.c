/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:43:50 by cabboud           #+#    #+#             */
/*   Updated: 2025/07/29 09:17:04 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		c;
	int		d;	
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			c = str[i] / 16;
			d = str[i] % 16;
			write (1, "\\", 1);
			write (1, &hex[c], 1);
			write (1, &hex[d], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
