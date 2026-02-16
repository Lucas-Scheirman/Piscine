#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *tab;
    int index;
    index =0;
    int taille;
    taille = max-min;
    

    
    if (min >= max || taille <= 0 )
        return NULL;
    tab = malloc(sizeof(int) * (taille)); 
    while(index < taille)
    {
        tab[index]=index;
        index++;
        min++;
    }
    return tab;
}
/*
int main()
{
    
    printf("%d",ft_range(1, 50));

    return 0;
}

Créez une fonction ft_range qui renvoie un tableau d'entiers.

Ce tableau d'entiers doit contenir 
00

• Min inclus - max exclu.

• Voici le prototype :

int *ft_range(int min, int max);

• Si la valeur de min est supérieure ou égale à max
, un pointeur NULL doit être renvoyé.*/