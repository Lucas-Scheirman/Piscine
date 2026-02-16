#include <unistd.h>
#include <stdio.h>
void printParam(char *parm)

{
    int index;
    index=0;
    while(parm[index])
    {
        write(1,&parm[index],1);
        index++;

    }
}

void sommes(char *str, int *tabValeurPar,int indexTabValeurPar)

{
    while()


}

int main (int argc, char **argv)
{
    int i;
    int o;
    i=1;
    o=0;
    int temp;
    int nombreDePar;

    nombreDePar=argc;
    if(nombreDePar ==2 )
        printParam(argv[nombreDePar-1]);
    if(nombreDePar > 2)
    {
        
    }
    
}

/* • Puisqu'il s'agit d'un programme, votre fichier .c doit contenir une fonction main.

• Écrivez un programme qui affiche ses arguments triés par ordre ASCII.

• Le programme doit afficher tous les arguments sauf argv[0].

• Chaque argument doit être affiché sur une nouvelle ligne.*/