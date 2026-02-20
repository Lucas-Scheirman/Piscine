#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i = 0;
    char *copy;

    while (src[i])
        i++;

    malloc(sizeof(char) * (i + 1));
    if (!copy)
        return NULL;

    i = 0;
    while ((copy[i] = src[i]))
        i++;

    return copy;
}
/*
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
}*/
