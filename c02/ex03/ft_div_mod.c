/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:34:39 by hadubois          #+#    #+#             */
/*   Updated: 2024/09/24 18:11:51 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int	a;
	int	b;
        int	d;
	int	m;
	
	a = 27;
	b = 10;
        m = 0;
        d = 0;
	ft_div_mod(a, b, &d, &m);
	printf("division: %d, modulo: %d ", d, m);

}*/
