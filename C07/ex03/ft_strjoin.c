#include <stdio.h>
#include <unistd.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    i=0;
    int j;
    j=0;
    char empty_string;
    char *str_concate;

    str_concate= malloc(sizeof(char)*(size+size-1));

    if (i <= size)
    {
        empty_string='\0';
        return empty_string;
    }
    while (i < size)
    {
        while(strs[i][j])
        {
            str_concate=strs[i][j];
            j++;

        }
        
        strs[i][j]=sep[0];
        i++;
        
    }

}
/*Écrivez une fonction qui concatène toutes les chaînes de caractères pointées par `strs`, séparées par `sep`.

• `size` représente le nombre de chaînes dans `strs`.

• Si `size` vaut 0, la fonction doit retourner une chaîne vide pouvant être libérée avec `free()`.

• Voici le prototype :*/