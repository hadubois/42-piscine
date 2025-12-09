/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:49:25 by hadubois          #+#    #+#             */
/*   Updated: 2024/10/03 14:39:28 by hadubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size >= lensrc)
//	if (size >= lendest)
	{
		while (src[i] != '\0')
		{
			dest[lendest + i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < size - lendest)
		{
			dest[lendest + i] = src[i];
			i++;
		}
	}
	return ((lensrc - 1) + (lendest - 1));
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size <= lendest)
		return (size + lensrc);
	while (src[i] && i < size - lendest - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char		dest[50] = "la vie ";
	char		src[] = "est belle | Lancome";
	char		dest_native[50] = "la vie ";
	char		src_native[] = "est belle | Lancome";
	unsigned int	size;

	size = 30;
	printf("%u\n", ft_strlcat(dest, src, 100));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest_native, src_native, 100));
	printf("%s\n", dest_native);
}
*/
