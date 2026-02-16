#include <stdio.h>
int ft_atoi(char *str)

{
    int index;
    int neg;
    index=0;
    int resultat;
    neg=0;
    int i;
    i=0;
    resultat=0;

    while( (str[i]== ' ') || (str[i] =='+') || (str[i] =='-'))
    {
        if (str[i]=='-')
            neg++;
        i++;
    }
    while((str[i] >= '0') && (str[i] <= '9'))
    {
        resultat = (resultat * 10) + (str[i]- '0');
        i++;
    }
    if(neg % 2 !=0)
    {
        return resultat = resultat * -1;
    } 
    else
    {
        return resultat;
    }

            
   
    
}
int main()
{
    printf("%d",ft_atoi(""));
}