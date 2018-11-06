/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:06:32 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/16 13:50:08 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_not_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (0);
	return (1);
}

int		ft_wordscount(char *str)
{
	int i;
	int wordscount;

	i = 0;
	wordscount = 0;
	while (str[i])
	{
		if (ft_not_whitespace(str[i]))
			wordscount++;
		while (str[i + 1] && ft_not_whitespace(str[i]))
			i++;
		i++;
	}
	return (wordscount);
}

int		ft_ctchar(char *str)
{
	int i;
	int charcount;

	i = 0;
	charcount = 0;
	while (str[i])
	{
		while (!(ft_not_whitespace(str[i])))
			i++;
		while (str[i] && ft_not_whitespace(str[i]))
		{
			charcount++;
			i++;
		}
	}
	return (charcount);
}

void	ft_concat(char **array, char *str, int wordscount)
{
	int words;
	int i;
	int j;

	words = 0;
	i = 0;
	while (words < wordscount)
	{
		j = 0;
		array[words] = (char*)malloc(sizeof(char) * (ft_ctchar(str) + 1));
		while (!(ft_not_whitespace(str[i])))
			i++;
		while (str[i] && ft_not_whitespace(str[i]))
		{
			array[words][j] = str[i];
			j++;
			i++;
		}
		array[words][j] = '\0';
		words++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		wordscount;

	wordscount = ft_wordscount(str);
	array = (char**)malloc(sizeof(char*) * wordscount + 1);
	ft_concat(array, str, wordscount);
	array[wordscount] = 0;
	return (array);
}
