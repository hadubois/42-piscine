/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:13:38 by hadubois          #+#    #+#             */
/*   Updated: 2024/09/24 18:32:02 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	r_division;
	int	r_modulo;

	r_division = *a / *b;
	r_modulo = *a % *b;
	*a = r_division;
	*b = r_modulo;
}

/*int	main(void)
{
	int	a = 19, b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
}*/
