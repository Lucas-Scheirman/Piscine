/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:11:45 by lucas             #+#    #+#             */
/*   Updated: 2026/02/18 20:26:17 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	neg;
	int	i;
	int	solution;

	index = 0;
	neg = 0;
	i = 0;
	solution = 0;
	while ((str[i] == ' ') || (str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		solution = (solution * 10) + (str[i] - '0');
		i++;
	}
	if (neg % 2 != 0)
		return (solution * -1);
	return (solution);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi(1100));
	return (0);
}*/

