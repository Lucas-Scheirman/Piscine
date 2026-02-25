/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 04:52:40 by lucas             #+#    #+#             */
/*   Updated: 2026/02/25 16:20:52 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	char	c;

	if (i >= 10)
		putnbr(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	y;

	i = 0;
	while (i < 100)
	{
		y = i + 1;
		while (y < 100)
		{
			if (i != y)
			{
				if (i < 10)
					write(1, "0", 1);
				putnbr(i);
				write(1, " ", 1);
				if (y < 10)
					write(1, "0", 1);
				putnbr(y);
				if (!(i == 98 && y == 99))
					write(1, ", ", 1);
			}
			y++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
