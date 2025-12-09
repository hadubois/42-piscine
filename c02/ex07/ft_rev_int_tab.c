/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:23:40 by hadubois          #+#    #+#             */
/*   Updated: 2024/09/25 15:50:24 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size - 1]);
		i ++;
		size --;
	}
}

/*int	main(void)
{
	int	tableau[] = {-1, -2, -3, 4, 5, 6};
	int	size = 6;

	ft_rev_int_tab(tableau, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tableau[i]);
	}
}*/
