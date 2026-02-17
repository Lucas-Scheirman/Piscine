/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:27:21 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 16:53:39 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "Bonjour";
	char *str2 = "Bonsoir";
	unsigned int n = 4;

	int result = ft_strncmp(str1, str2, n);

	printf("%d", result);

	return (0);
}*/
