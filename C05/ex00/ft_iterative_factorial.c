/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:00:00 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/20 01:49:53 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		resultat = (resultat) * (nb);
		nb--;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
