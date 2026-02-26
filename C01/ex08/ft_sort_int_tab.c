/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 09:44:33 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/25 21:52:42 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
				i = 0;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	int	tab[]={6, 9, 8, 5, 3};
	int	i;

	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
