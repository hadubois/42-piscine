/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:54:47 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/04 14:31:22 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				resultat;
	unsigned int	i;

	i = 0;
	resultat = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			resultat = s1[i] - s2[i];
			break ;
		}
	}
	return (resultat);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "hella";
	char	s2[] = "hellz";
	unsigned int	n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
        printf("%d\n", strncmp(s1, s2, n));
	return(0);

}
*/
