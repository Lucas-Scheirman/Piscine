/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:56:58 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/19 04:39:33 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>





int ft_atoi_base(char *str, char *base)
{
	int index;
	int index_2;
	int nb;
	int len_base;
	nb=0;
	index=0;
	index_2=0;
	while (str[index])
	{
		index++;	
	}
	len_base=index;
	index=0;
	while(str[index])
	{
		while(base[index_2])
		{
			if(str[index]==base[index_2])
			{
				nb = (nb * len_base) + (index_2);
			}
			index_2++;
		}
		index_2=0;
		index++;
	}
	return nb;
}
int main()
{
	printf("%d",ft_atoi_base("ghjgh","ghj"));
}


/*
Écrivez une fonction qui convertit la partie initiale de la chaîne pointée par `str`

en une représentation entière.

• `str` est dans une base spécifique, donnée en deuxième paramètre.

• À l'exception de la base, la fonction doit se comporter exactement comme `ft_atoi`.

• Si un argument invalide est fourni, la fonction doit renvoyer 0.

Exemples d'arguments invalides :

◦ La base est vide ou ne contient qu'un seul caractère.

◦ La base contient des caractères dupliqués.

◦ La base contient les caractères « + », « - » ou des espaces.

• Le prototype de la fonction doit être le suivant :
*/