/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 03:51:45 by lucas             #+#    #+#             */
/*   Updated: 2026/02/25 04:04:57 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_charset(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
			return (1);
		j++;
	}
	return (0);
}

void	init_tab_char(char **tab, char *str, char *charset)
{
	int	i;
	int	k;
	int	word;

	i = 0;
	word = 0;
	k = 0;
	while (str[i])
	{
		if (!(is_charset(str, charset, i)))
		{
			while (str[i] && !(is_charset(str, charset, i)))
			{
				tab[word][k] = str[i];
				i++;
				k++;
			}
			tab[word][k] = '\0';
			word++;
			k = 0;
		}
		else
			i++;
	}
}

void	init_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	k;
	int	word;

	i = 0;
	k = 0;
	word = 0;
	while (str[i])
	{
		if (!(is_charset(str, charset, i)))
		{
			while (str[i] && !(is_charset(str, charset, i)))
			{
				k++;
				i++;
			}
			tab[word] = malloc(sizeof(char) * (k + 1));
			word++;
			k = 0;
		}
		else
			i++;
	}
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	k;
	int	word;

	i = 0;
	k = 0;
	word = 0;
	while (str[i])
	{
		if (!(is_charset(str, charset, i)))
		{
			word += 1;
			while (str[i] && !(is_charset(str, charset, i)))
			{
				k++;
				i++;
			}
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	char	**tab;

	word = count_word(str, charset);
	tab = malloc(sizeof(char *) * (word + 1));
	tab[word] = 0;
	init_tab(tab, str, charset);
	init_tab_char(tab, str, charset);
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("..bonjour;salut;;hello", ";.");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
