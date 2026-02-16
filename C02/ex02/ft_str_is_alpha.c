/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:26:31 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 10:41:14 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z')
				|| (c >= 'A' && c <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("12156"));
	printf("%d\n", ft_str_is_alpha("asdaf"));
	printf("%d\n", ft_str_is_alpha("asd564"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Sda"));
	printf("%d\n", ft_str_is_alpha("Sda55"));
	return (0);
}
*/
