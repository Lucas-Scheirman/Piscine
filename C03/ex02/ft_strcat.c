/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:27:28 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 18:53:39 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	o;

	i = 0;
	o = 0;

	while (dest[i])
		i++;
	while (src[o])
	{
		
		dest[i] = src[o];
		o++;

		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[30] = "fdgg";
	char	b[] = "dssdf";

	printf("%s", ft_strcat(a, b));
}
