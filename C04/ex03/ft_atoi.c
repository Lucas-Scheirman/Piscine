/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:11:45 by lucas             #+#    #+#             */
/*   Updated: 2026/02/17 18:13:15 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)

{
	int index;
	int neg;
	index = 0;
	int solution;
	neg = 0;
	int i;
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
	{
		return (solution = solution * -1);
	}
	else
	{
		return (solution);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_atoi(""));
}*/
