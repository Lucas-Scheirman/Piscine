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
}*/
