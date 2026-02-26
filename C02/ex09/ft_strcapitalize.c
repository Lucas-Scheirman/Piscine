/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:25:13 by lucas             #+#    #+#             */
/*   Updated: 2026/02/26 22:22:29 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_charset(char *str, int i)
{
	if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 0;
	while (str[i])
	{
		if (is_charset(str, i))
		{
			while (str[i] && is_charset(str, i))
				i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char	str[] = "salut, comment tu vas ? 
	42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/