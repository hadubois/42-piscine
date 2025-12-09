/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_factorial.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:30:35 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/07 09:51:43 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_recursive_factorial(atoi(av[1])));
}
*/
