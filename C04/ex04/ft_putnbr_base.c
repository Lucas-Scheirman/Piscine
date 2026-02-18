
#include <unistd.h>
#include <stdio.h>
void	write_index_base(char *tab_resultat, int index_2)
{
	while(index_2 >=0)
	{
		write(1, &tab_resultat[index_2], 1);
		index_2--;
	}
}
void write_result(int index, int nbr, char *base)
{
	char tab_resultat[12];
	int index_2;
	index_2=0;
	while (nbr != 0)
	{
		tab_resultat[index_2]=base[nbr % index];
		nbr =nbr / index;
		index_2++;
	}
	tab_resultat[index_2]='\0';
	write_index_base(tab_resultat,index_2-1);
}


void	ft_putnbr_base(int nbr, char *base)
{
	int	index;
	int	index_2;
	index_2 = 0;
	index = 0;
	if (base[index]=='\0')
	{
		return;
	}
	while (base[index])
	{
		if (!((base[index] >= 'a' && base[index] <= 'z')|| (base[index] >= 'A' && base[index] <= 'Z')|| (base[index] >= '0' && base[index] <= '9')) )
			return;
		while (base[index_2])
		{
			if (base[index]==base[index_2] && index != index_2)
				return;
			index_2++;
		}
		index_2=0;
		index++;
	}
	if (index==1)
		return;
	write_result(index,nbr,base);

}

int main()
{
	ft_putnbr_base(42,"fga");
}


/*
Chapitre VIII
Exercice 04 : ft_putnbr_base
Exercice 04
ft_putnbr_base
Répertoire de rendu : ex04/
Fichiers à rendre : ft_putnbr_base.c
Fonctions autorisées : write

• Créez une fonction qui affiche un nombre dans un système de base donné dans le terminal.
• Le nombre est fourni sous forme d’int,
	et la base est représentée comme une chaîne de caractères.
• Le système de base consiste en tous les symboles utilisés pour représenter le nombre.
◦ 0123456789 est le système de base couramment utilisé pour représenter les nombres décimaux.
◦ 01 est un système de base binaire.
◦ 0123456789ABCDEF est un système de base hexadécimal.
◦ poneyvif est un système de base octal.
• La fonction doit gérer les nombres négatifs.
• Si un argument invalide est fourni, rien ne doit être affiché.

Exemples d’arguments invalides :
◦ La base est vide ou ne contient qu’un seul caractère.
◦ La base contient des caractères en double.
◦ La base contient ‘+’ ou ‘-’.
*/
