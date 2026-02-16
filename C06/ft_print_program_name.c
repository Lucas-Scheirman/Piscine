
#include <unistd.h>
int main(int argc,char **argv)

{

    int i;
    
    i=0;
    if (argc == 1)
    {

        while(argv[0][i])
        {
            
            write(1,&argv[0][i],1);
            i++;
        }
        

        
    }
   
    
}

/*Puisqu'il s'agit d'un programme, votre fichier .c doit contenir une fonction main.

• Écrivez un programme qui affiche son nom, suivi d'un saut de ligne.

• Exemple :*/