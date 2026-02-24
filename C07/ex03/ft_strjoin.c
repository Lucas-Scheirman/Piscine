/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:45:25 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/24 15:45:25 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int    str_len(char **strs, char *sep, int size)
{
    int str_len;
    int i;
    int j;
    
    i = 0;
    str_len = 0;
    j = 0;
    while (i < size)
    {
        while (strs[i][j])
            j++;
        str_len += j;
        j = 0;
        i++;
    }
    i = 0;
    while (sep[i])
        i++;
    str_len+=i * size;
    str_len-=i;
    return (str_len);
}

void    add_sep(char *sep, int *k, char *str_concatenate)
{
    int j;
    j = 0;

    while (sep[j])
    {
        str_concatenate[*k] = sep[j];
        (*k)++;
        j++;
    }
}

void    concatene(int i, int *k, char *str_concatenate, char **strs)
{
    int j;
    j = 0;
    while (strs[i][j])
    {
        str_concatenate[*k] = strs[i][j];
        j++;
        (*k)++;
    }
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char *str_concatenate;
    int i;
    int k;
    int size_str;
    i = 0;
    k = 0;
    if (size == 0) 
        return ft_strdup("");
    size_str = str_len(strs, sep, size);
    str_concatenate = malloc(sizeof(char) * (size_str + 1));
    while (i < size)
    {
        concatene(i, &k, str_concatenate, strs);
        if (i != size - 1)
            add_sep(sep, &k, str_concatenate);
        i++;
    }
    str_concatenate[k] = '\0';
    return (str_concatenate);
}
/*
int    main(void)
{
    char *strs[] = {"fsfsf", "dfsd", "dfsfsd"};
    char *c = ", ";
    printf("%s", ft_strjoin(3, strs, c));
}*/
