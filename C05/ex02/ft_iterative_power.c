/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:00:00 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 00:00:00 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb == 0 && power == 0)
		return (0);
	while (i <= power)
	{
		resultat = resultat * nb;
		i++;
	}
	if (resultat < 0)
		return (0);
	return (resultat);
}
