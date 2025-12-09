/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:17:36 by hadubois          #+#    #+#             */
/*   Updated: 2024/09/24 10:19:11 by hadubois         ###   ########.fr       */
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

/*int	main(void)
{
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
        write(1, "\n", 1);
	ft_putnbr(2147483647);

}*/
