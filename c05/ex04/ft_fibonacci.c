/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:47:27 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/07 11:40:50 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2)
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (index);
}

/*
int ft_fibonacci(int index)
{
     if(index < 0)
         return -1;
     if(index < 2)
         return index;
     return(ft_fibonacci(index-1) + ft_fibonacci(index-2));
 }
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_fibonacci(atoi(av[1])));
}
*/
