/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 09:44:33 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/12 10:08:09 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = -1;
	while (i < size)
	{
		if (i + 1 < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				i = -1;
			}
		}
		i++;
	}
	return (tab);
}
