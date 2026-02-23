/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:37:09 by lucas             #+#    #+#             */
/*   Updated: 2026/02/23 13:37:09 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	taille;

	if (min >= max)
		return (NULL);
	i = 0;
	taille = max - min;
	tab = malloc(sizeof(int) * taille);
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int *tab;;
	tab=ft_range(1, 50);
	int i;
	i=0;
	while(i <50-1)
	{
		printf("%d\n ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
