/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:11:36 by lucas             #+#    #+#             */
/*   Updated: 2026/02/18 16:34:52 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	tab_convert(int nb)
{
	int index;
	index=0;
	char tab_char_int[10];
	while (nb != 0)
	{
		tab_char_int[index] = (nb % 10) + '0';
		nb = nb / 10;
		index += 1;
	}
	tab_char_int[index] = '\0';
	index-=1;
	while (index >= 0)
	{
		write(1, &tab_char_int[index], 1);
		index--;
	}
}
void	ft_putnbr(int nb)

{
	if (nb == -2147483648)
	{
		write(1,"-2147483648",11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1,"-",1);
		tab_convert(nb);
		
	}else
	{
		tab_convert(nb);
	}
}
/*#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	main(void)

{	
	ft_putnbr(-60);
}*/
