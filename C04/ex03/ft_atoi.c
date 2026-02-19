/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:11:45 by lucas             #+#    #+#             */
/*   Updated: 2026/02/19 22:22:20 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace_pass(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) && (str[i] <= 32))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	count_sign;
	int	i;
	int	solution;

	count_sign = 0;
	solution = 0;
	i = isspace_pass(str);
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			count_sign++;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		solution = (solution * 10) + (str[i] - '0');
		i++;
	}
	if (count_sign % 2 != 0)
		return (solution * -1);
	return (solution);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("   ---+--+1234ab567"));
	return (0);
}
*/
