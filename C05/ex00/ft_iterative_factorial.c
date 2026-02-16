/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:00:00 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 00:00:00 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;
	int	temp;

	resultat = 0;
	temp = nb;
	if (nb == 0)
		return (0);
	while (nb > 0)
	{
		if (nb == temp && nb != 1)
			resultat = (nb) * (nb - 1);
		else if (nb == 1)
			return (1);
		else if (nb - 1 != 0)
			resultat = (resultat) * (nb - 1);
		nb--;
	}
	return (resultat);
}
