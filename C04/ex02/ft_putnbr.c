#include <unistd.h>
void ft_putnbr(int nb)
{   
    
    long nbneg;
    int a;
    a=0;

    if(nb < 0)
       nbneg=nb; 
    while(nb > 10)
    {
        nb = nb /10;
        a++;
    }
    write(1,nb,1);
}

int main ()

{
    ft_putnbr(20);
}

/* Créez une fonction qui affiche le nombre passé en paramètre.

Cette fonction doit pouvoir gérer toutes les valeurs possibles du type `int`.

• Le prototype de la fonction doit être le suivant :*/