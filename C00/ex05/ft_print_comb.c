/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42belgium.>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 06:45:07 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/04 10:40:08 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	pos1;
	char	pos2;
	char	pos3;

	pos1 = '0';
	while (pos1 <= '7')
	{
		pos2 = pos1 + 1;
		while (pos2 <= '8')
		{
			pos3 = pos2 + 1;
			while (pos3 <= '9')
			{
				write(1, &pos1, 1);
				write(1, &pos2, 1);
				write(1, &pos3, 1);
				if (pos1 != '7')
					write(1, ", ", 2);
				pos3++;
			}
			pos2++;
		}
		pos1++;
	}
}
