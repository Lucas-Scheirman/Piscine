/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:56:58 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/19 05:15:14 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_index_base(char *tab_resultat, int index_2)
{
	while (index_2 >= 0)
	{
		write(1, &tab_resultat[index_2], 1);
		index_2--;
	}
}

void	write_result(int index, long nbr_long, char *base)
{
	char	tab_resultat[64];
	int		index_2;

	index_2 = 0;
	while (nbr_long != 0)
	{
		tab_resultat[index_2] = base[nbr_long % index];
		nbr_long = nbr_long / index;
		index_2++;
	}
	tab_resultat[index_2] = '\0';
	write_index_base(tab_resultat, index_2 - 1);
}
void base_true (char *base, long nbr_long)
{
	int	index;
	int	index_2;
	index = 0;
	index_2 = 0;
	while (base[index])
	{
		if ((base[index] == '+') || (base[index] == '-') || (base[index] == ' ' && (base[index] <= 126)))
    		return;

		while (base[index_2])
		{
			if (base[index] == base[index_2] && index != index_2)
				return ;
			index_2++;
		}
		index_2 = 0;
		index++;
	}
	write_result(index, nbr_long, base);
}
void	ft_putnbr_base(int nbr, char *base)
{
	long nbr_long;
	nbr_long = nbr;
	
	if ((base[0]== '\0') || (base[1] == '\0'))
		return;
	if(nbr_long == 0)
	{
		write(1, "0", 1);
		return;
	}
	if(nbr_long<0)
	{
		write(1, "-", 1);
		nbr_long = -nbr_long;
	}
	base_true(base,nbr_long);
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483647, "fas");
}*/