/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:27:54 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 20:16:20 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    int index_dest;
    int index_src;
    int size_str;
    index_dest=0;
    index_src=0;
    

    while(dest[index_dest])
    {
        index_dest++;
    }
     
    while(src[index_src])
    {
        index_src++;
    } 
    if(dest[index_dest] != '\0')
    {
        return size + index_src;
    } 
    size_str=(index_dest + index_src)-1;

    if(size_str >= size)
    {
        return size_str;
    }
    else if (size_str < size && size < 2)
    
        return size_str;
    else
    {
        concat(index_dest,0);
        return size_str;
    }
    
    
}
void concat(int index_dest,int index_src,int size)
{
    while(str[index_dest] && index_dest < size)
    {
        dest[index_dest]=src[index_src];
        index_dest++;
        index_src++;
        if(src[index_src]=='\0')
        {
            dest[index_dest]='\0';
        }
    }
}

/*
DESCRIPTION
     Les fonctions strlcpy() et strlcat() copient et concatènent des chaînes 
     de caractères respectivement. Elles sont conçues pour être des remplacements plus sûrs, plus cohérents 
     et moins sujets aux erreurs que strncpy(3) et strncat(3). Contrairement à ces fonctions, strlcpy() 
     et strlcat() prennent la taille complète du tampon (et non seulement la longueur) 
     et garantissent que le résultat est terminé par un caractère NUL (tant que size est supérieur à 0 µ
     ou, dans le cas de strlcat(), tant qu’il reste au moins un octet libre dans dst). Notez 
     qu’un octet pour le caractère NUL doit être inclus dans size. Notez également que strlcpy() et strlcat()
      fonctionnent uniquement avec de véritables chaînes « C ». Cela signifie que pour 
     strlcpy(), src doit être terminée par NUL et que pour strlcat(), src et dst doivent toutes deux être 
     terminées par NUL.

     La fonction strlcpy() copie jusqu’à size - 1 caractères depuis la chaîne src terminée par NUL 
     vers dst, puis termine le résultat par NUL.

     La fonction strlcat() ajoute la chaîne src terminée par NUL à la fin de dst. Elle ajoutera au maximum 
     size - strlen(dst) - 1 octets, puis terminera le résultat par NUL.

RETURN VALUES
     Les fonctions strlcpy() et strlcat() retournent la longueur totale de la chaîne qu’elles 
     ont tenté de créer. Pour strlcpy(), cela correspond à la longueur de src. Pour strlcat(), 
     cela correspond à la longueur initiale de dst plus la longueur de src. Bien que cela puisse 
     sembler quelque peu déroutant, cela a été fait afin de rendre la détection de troncature simple.

     Notez cependant que si strlcat() parcourt size caractères sans trouver de NUL, la longueur de la 
     chaîne est considérée comme étant size et la chaîne de destination ne sera pas terminée par 
     NUL (puisqu’il n’y avait pas d’espace pour le NUL). Cela empêche strlcat() de dépasser la fin d’une chaîne.
      En pratique, cela ne devrait pas se produire (car cela signifie que soit size est incorrect, 
     soit dst n’est pas une véritable chaîne « C »). Cette vérification existe afin de prévenir d’éventuels problèmes
      de sécurité dans un code incorrect.
