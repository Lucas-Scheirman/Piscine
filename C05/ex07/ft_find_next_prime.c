/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 22:52:13 by lucas             #+#    #+#             */
/*   Updated: 2026/02/20 02:44:49 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nombreprime(int i, int nb, int o)
{
	while (i <= nb)
	{
		if (nb % i == 0)
			o++;
		if (o == 2 && i == nb)
			return (nb);
		if (o > 2)
		{
			nb++;
			i = 0;
			o = 0;
		}
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	o;

	i = 1;
	o = 0;
	if (nb <= 1)
		return (2);
	return (nombreprime(i, nb, o));
}
