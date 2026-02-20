/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 00:15:31 by lucas             #+#    #+#             */
/*   Updated: 2026/02/20 00:15:31 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char *temp;
	i = 1;

	while(argv [i])
	{
		j=0;
		while (argv[i][j])
		{
			if(argv[i+1][j] <argv[i][j])
			{
				temp =argv[i][j];
				argv[i][j]=argv[i+1][j];
				argv[i+1][j]=temp;
				break;
			}
			j++;
		}
		i++;
	}
}
//Si le mot de lindex 2 est plus petit lexicologiquemet que le mot alors je swap.
/*et je remet j a zero et je remet i a 0. du cou*/
