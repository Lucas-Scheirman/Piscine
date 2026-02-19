/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 00:56:58 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/19 22:35:55 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_base_convert(char *tab_resultat, int j)
{
	while (j >= 0)
	{
		write(1, &tab_resultat[j], 1);
		j--;
	}
}

void	write_result(int i, long nbr_long, char *base)
{
	char	tab_resultat[64];
	int		j;

	j = 0;
	while (nbr_long != 0)
	{
		tab_resultat[j] = base[nbr_long % i];
		nbr_long = nbr_long / i;
		j++;
	}
	tab_resultat[j] = '\0';
	write_base_convert(tab_resultat, j - 1);
}

int	base_true(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_long;
	int		i;

	if ((base[0] == '\0') || (base[1] == '\0'))
		return ;
	nbr_long = nbr;
	if (nbr_long == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr_long < 0)
	{
		write(1, "-", 1);
		nbr_long = -nbr_long;
	}
	i = base_true(base);
	if (i != 0)
		write_result(i, nbr_long, base);
	else
		return ;
}

/*
int	main(void)
{
	ft_putnbr_base(0, "fas");
}
*/
