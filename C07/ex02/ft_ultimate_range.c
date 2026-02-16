
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max){
    int index;
    index =0;
    int taille;
    taille = max-min;

    if (min >= max || taille <= 0 )
        return NULL;

    *range = malloc(sizeof(int) * (taille));
    if(*range==NULL)
    {
        return -1;
    }
    else
    {
        int i;
        i=0;
        while (i < taille)
        {
            (*range)[i]=i;
            i++;
        }
        return taille;
    }
    
}

int main()
{
    
    int *ptro;
    ft_ultimate_range(&ptro,1, 30);

    return 0;
}
/*• Créez une fonction ft_ultimate_range qui alloue et assigne un tableau d'entiers.
 Ce tableau d'entiers doit contenir toutes les valeurs entre min et max.
• Min inclus - max exclu.
• Voici comment il devrait être prototypé :
int ft_ultimate_range(int **range, int min, int max);
• La taille de range doit être retournée (ou -1 en cas d'erreur).
• Si la valeur de min est supérieure ou égale à celle de max, range pointera vers
 NULL et elle doit retourner 0.
10*/