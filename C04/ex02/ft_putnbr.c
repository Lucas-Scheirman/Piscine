/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:11:36 by lucas             #+#    #+#             */
/*   Updated: 2026/02/17 20:53:01 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)

{
	int index;
	char tab_char_int[10];
	index = 0;
	if (nb < 0)
		nb = -nb;
	
	while (nb != 0)
	{
		tab_char_int[index] = (nb % 10) + '0';
		nb = nb / 10;
		index += 1;
	}
	tab_char_int[index] = '\0';

	while (index >= 0)
	{
		write(1, &tab_char_int[index], 1);
		index--;
	}
}

int	main(void)

{
	ft_putnbr(288);
}
