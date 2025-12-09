/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:37:40 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/06 14:31:34 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 1 + i;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	lnbr;

	lnbr = nbr;
	len = ft_strlen(base);
	if (len > 1 && ft_checkbase(base))
	{
		if (lnbr < 0)
		{
			lnbr = -lnbr;
			ft_putchar('-');
		}
		if (lnbr / len > 0)
			ft_putnbr_base((lnbr / len), base);
		ft_putchar(base[lnbr % len]);
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	ft_putnbr_base(atoi(av[1]), av[2]);
}
*/
