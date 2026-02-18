/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:11:36 by lucas             #+#    #+#             */
/*   Updated: 2026/02/18 18:43:48 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	tab_convert(int nb)
{
	int		index;
	char	tab_char_int[12];

	index = 0;
	while (nb != 0)
	{
		tab_char_int[index] = (nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	tab_char_int[index] = '\0';
	index--;
	while (index >= 0)
	{
		write(1, &tab_char_int[index], 1);
		index--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		tab_convert(nb);
	}
	else
		tab_convert(nb);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_putnbr(else if (nb == 2147483647)
		write(1, "2147483647", 10));
	return (0);
}
*/
