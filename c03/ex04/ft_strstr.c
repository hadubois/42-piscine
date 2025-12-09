/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:55:02 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/03 15:26:14 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	ptr = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (ptr = &str[i], ptr);
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
int     main()
{
        printf ("%s\n", ft_strstr("les passants qui passaient", "passant"));
        printf("%s\n", strstr("les passants qui passaient", "passant"));
}
*/
