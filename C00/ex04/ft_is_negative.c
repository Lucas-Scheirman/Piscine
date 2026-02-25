/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheirm <lscheirm@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:21:16 by lscheirm          #+#    #+#             */
/*   Updated: 2026/02/04 04:03:34 by lscheirm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	l;

	if (n < 0)
	{
		l = 'N';
		write(1, &l, 1);
	}
	else
	{
		l = 'P';
		write(1, &l, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(3);
	return (0);
}
*/