/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:36:23 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/07 11:34:46 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_recursive_power(atoi(av[1]), (atoi(av[2]))));
}
*/
