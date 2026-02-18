

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
/*#include <unistd.h>
#include <stdio.h>
int main()
{
	ft_putnbr_base(42,"fga");
}*/

