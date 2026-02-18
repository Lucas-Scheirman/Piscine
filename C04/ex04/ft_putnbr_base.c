
void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;
	int	len_base2;

	len_base2 = 0;
	len_base = 0;
	while (base[len_base])
	{
		if (!((base[len_base] >= "a" && base[len_base] <= "z")
				|| (base[len_base] >= "A" && base[len_base] <= "Z")
				|| (base[len_base] >= "0" && base[len_base] <= "9")))
			return (0);
		while (base[len_base2])
		{
			if (ba)
			len_base2++:
		}
		len_base2=0;
		len_base++;
	}
	len_base -= 1;
	while (nbr != 0)
	{
		nbr / len_base;
		write_index_base(base, nbr, len_base)
	}
}

int	params_true(char *base, int nbr, int len_base)
{
}

void	write_index_base(char *base, int index)

{
	write(1, &base[index], 1)
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
