/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:39:10 by lucas             #+#    #+#             */
/*   Updated: 2026/02/23 13:39:10 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (size));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}

/*
#include <stdio.h>

int	main(void)
{
	int *ptro;
	printf("%d", ft_ultimate_range(&ptro, 1, 30));
	printf("%d", ft_ultimate_range(&ptro, 111, 30));

	return (0);
}*/
