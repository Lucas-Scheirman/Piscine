/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:27:44 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 17:04:00 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	comparstr(char *str, char *to_find, int o)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[o] && to_find[i] != '\0')
			return (0);
		o++;
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (!to_find[0])
		return (str);
	else
	{
		while (str[i] && to_find[0] != '\0')
		{
			if (str[i] == to_find[0])
			{
				if (comparstr(str, to_find, i))
					return (&str[i]);
			}
			b++;
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char	b[] = " ";

	printf("%s\n", ft_strstr(a, b));
}*/
