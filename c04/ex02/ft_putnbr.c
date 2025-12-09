/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:33:27 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/06 14:39:57 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	int	i;

	i = nb + '0';
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -lnb;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
	}
	ft_putchar(lnb % 10);
}

/*
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	ft_putnbr(atoi(av[1]));
}
*/
