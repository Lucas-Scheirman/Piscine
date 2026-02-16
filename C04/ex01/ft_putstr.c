#include <unistd.h>
#include <stdio.h>
void ft_putstr(char *str)

{
    int i;
    i=0;

    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

/*
int main()

{
    
    ft_putstr("sfsfd");
}
Créez une fonction qui affiche une chaîne de caractères sur la sortie standard.

• Le prototype de la fonction doit être le suivant : */