/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:34:56 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/09 13:25:10 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	i_max;

	i = 1;
	if (nb == 1)
		return (1);
	i_max = nb / 2;
	while (i <= i_max && i <= 46340)
	{
		if (nb == ft_iterative_power(i, 2))
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_sqrt(atoi(av[1])));
}
*/
