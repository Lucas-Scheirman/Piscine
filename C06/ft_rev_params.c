#include <unistd.h>

int main(int argc,char **argv)

{

    int i;
    int o;
    i=1;
    o=0;

    while (argv[i])
    {
        i++;

    }
    i=i-1;

    while (i >0  )
    {
        o=0;
        while (argv[i][o])
        {   

                write(1,&argv[i][o],1);
                
                o++;
            
            
        }
        write(1,"\n",1);
        
         
    }

    
    
}







/*#include <unistd.h>

int main(int argc,char **argv)

{
    int i;
    int max = argc - 1;

    while (max > 0)
    {
        i = 0;
        while (argv[max][i])
        {
            write(1,&argv[max][i], 1);
            i++;
        }
        max--;
        write(1, "\n", 1);
        
    }
    return (0);

}
Puisqu'il s'agit d'un programme, votre fichier .c doit contenir une fonction main.

• Écrivez un programme qui affiche ses arguments.

• Chaque argument doit être affiché sur une nouvelle ligne, dans l'ordre inverse de la ligne de commande.

• Le programme doit afficher tous les arguments sauf argv[0].*/