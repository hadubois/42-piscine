/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:28:03 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/07 14:31:47 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
			i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	(void)ac;
	while (i > 0)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i--;
	}
}
