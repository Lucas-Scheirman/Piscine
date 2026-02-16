#include <unistd.h>

int main(int argc,char **argv)

{

    int i;
    int o;
    i=1;
    o=0;


    if  (argc > 1)
    {
        while (argv[i])
        {
            while (argv[i][o])
            {   

                    write(1,&argv[i][o],1);
                    
                    o++;
                
                
            }
            write(1,"\n",1);
            o=0;
            i++; 
        }
    }
    
    
}
/*Puisqu'il s'agit d'un programme, votre fichier .c doit contenir une fonction main.

• Écrivez un programme qui affiche ses arguments.

• Chaque argument doit être affiché sur une nouvelle ligne, dans le même ordre que sur la ligne de commande.

• Le programme doit afficher tous les arguments sauf argv[0].

• Exemple :*/