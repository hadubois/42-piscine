/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:47:34 by hadubois          #+#    #+#             */
/*   Updated: 2024/09/25 15:48:12 by hadubois         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0 + i;
		while (j < size - 1)
		{
			if (tab[i] > tab[j + 1])
			{
				ft_swap(&tab[i], &tab[j + 1]);
			}
			j ++;
		}
		i ++;
	}
}

/*int	main(void)
{
	int	tableau[] = {2, -1, -4, 4, 6, -10};
	int	taille = 6;

	ft_sort_int_tab(tableau, taille);
	for (int i = 0; i < taille; i++)
	{
		printf("%d  ", tableau[i]);
	}
}*/
