/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:27:54 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/17 20:01:56 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	concat(int len_dest, int size, char *dest, char *src)
{
	int	len_src;

	len_src = 0;
	while (src[len_src] && len_dest < size - 1)
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	len_str;

	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	len_str = (len_dest + len_src);
	if (size <= len_dest)
		return (size + len_src);
	concat(len_dest, size, dest, src);
	return (len_str);
}
/*
int	main(void)
{
	char	word_dest[12] = "hELLO";
	char	word_src[] = "world";

	printf("%d", ft_strlcat(word_dest, word_src, 12));
	printf("%s", word_dest);
}*/
