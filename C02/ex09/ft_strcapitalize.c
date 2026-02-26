/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:25:13 by lucas             #+#    #+#             */
/*   Updated: 2026/02/26 11:32:46 by lucas            ###   ########.fr       */
=======
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:25:13 by lucas             #+#    #+#             */
/*   Updated: 2026/02/26 20:04:37 by lscheirm         ###   ########.fr       */
>>>>>>> c63aa253c496d7fed9722d6163552ed2a235959b
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	if ((str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
<<<<<<< HEAD
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' '
				|| str[i - 1] == '+' || str[i - 1] == '-'))
=======
		if ((str[i] >= 'a' && str[i] <= 'z') && (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') || (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))))
>>>>>>> c63aa253c496d7fed9722d6163552ed2a235959b
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main ()
{
    char tab[]="hi, how are you? 42words forty-two; fifty+and+one";
    printf("%s",ft_strcapitalize(tab));
}*/
