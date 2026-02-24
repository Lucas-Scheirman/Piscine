#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int is_charset(char *str, char *charset,int i)
{
    int j;
    j=0;
    
        while(charset[j])
        {
            if(str[i]==charset[j])
                return (1);
            j++;
        }
        return (0);  
}
void init_tab(int i,char **tab,int size)
{
    tab[i]=malloc(sizeof(char) * (size+1));
}
int count_word(char *str,char *charset)
{
    int i;
    int k;
    int word;
    
    i=0;
    k=0;
    word=0;
    while (str[i])
    {
        if(!(is_charset(str,charset,i)))
        {
            word+=1;
            while(str[i] && !(is_charset(str,charset,i)))
            {
                k++;
                i++;
            }
        }
        i++;
        
    }

    return word;
}
void stock(char *str,char *charset,char **tab)
{
    int i;
    int k;
    int o;
    i=0;
    k=0;
    o=0;
    while (str[i])
    {
        if(!(is_charset(str,charset,i)))
        {
            while(str[i] && !(is_charset(str,charset,i)))
            {
                tab[o][k]=str[i];
                k++;
                i++;         
            }
            tab[o][k]='\0';
            o++;     
            k=0;
        }
        i++;
    }
}

void ft_split(char *str, char *charset)
{
    int word;
    char **tab;
    int i;

    i=0;
    word=count_word(str,charset);
    tab=malloc(sizeof(char*) * (word+1));
    printf("%d",word);

}


int main()
{
    ft_split("?;asd;asd?dd","?;");
}
