#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *ft_strdup(char *src)

{
    int index;
    char *strCopy;
    
    index= 0;
    while (src[index])
    {
        index++;
    }
    strCopy = malloc(sizeof(char)* index);
    if(strCopy==NULL)
    {
        
        return NULL;
    }
    else
    {
        while(index > -1)
        {
            strCopy[index]=src[index];
            index--;
            
        }
        return strCopy;
    }
}
int main()
{
    //printf("%s", ft_strdup("klfggdf"));
    int i;
    i=0;
    char *a;
    a=ft_strdup("dfdss");
    while(a[i])

    {
        write(1,&a[i],1);
        i++;
    }
}


// /*La fonction strCopydup() renvoie un pointeur sur une nouvelle chaîne de caractères 
// qui est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne est obtenue
//  en appelant malloc(3), et peut (doit) donc être libérée avec free(3).
// La fonction strCopyndup() est identique, mais ne copie au plus que n caractères.
//  Si s est plus grande que n, seuls n caractères sont copiés, et un octet nul (« \0 ») est ajouté.

// strCopydupa() et strCopyndupa() sont similaires, mais utilisent alloca(3) pour allouer le tampon.
//  Elles sont directement utilisables avec GNU gcc(1), mais souffrent des mêmes restrCopyictions que alloca(3).  

// VALEUR RENVOYÉE
// La fonction strCopydup() renvoie un pointeur sur la chaîne dupliquée, ou NULL s'il n'y avait pas assez de mémoire.  