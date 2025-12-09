/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:40:51 by hadubois          #+#    #+#             */
/*   Updated: 2024/09/23 13:37:17 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	int	b;

	b = i + '0';
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 99 - 1)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar(n1 / 10);
			ft_putchar(n1 % 10);
			write(1, " ", 1);
			ft_putchar(n2 / 10);
			ft_putchar(n2 % 10);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
			n2 ++;
		}
		n1 ++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
