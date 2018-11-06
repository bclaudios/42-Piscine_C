/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colle00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:22:36 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/16 19:41:45 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"

void	ft_top_line00(char *str, int x)
{
	int i;

	i = 0;
	if (x >= 1)
	{
		str[i++] = 'o';
		if (x >= 3)
		{
			while (i < x - 1)
				str[i++] = '-';
		}
		if (x >= 2)
			str[i++] = 'o';
		str[i++] = '\n';
		str[i] = '\0';
	}
}

void	ft_mid_line00(char *str, int x)
{
	int i;
	int linelen;

	linelen = 0;
	i = ft_strlen(str);
	if (x >= 1)
	{
		str[i++] = '|';
		linelen++;
		if (x >= 3)
		{
			while (linelen < x - 1)
			{
				str[i++] = ' ';
				linelen++;
			}
		}
		if (x >= 2)
			str[i++] = '|';
		str[i++] = '\n';
	}
	str[i] = '\0';
}

void	ft_bot_line00(char *str, int x)
{
	int i;
	int linelen;

	linelen = 0;
	i = ft_strlen(str);
	if (x >= 1)
	{
		str[i++] = 'o';
		linelen++;
		if (x >= 3)
		{
			while (linelen < x - 1)
			{
				str[i++] = '-';
				linelen++;
			}
		}
		if (x >= 2)
		{
			str[i++] = 'o';
		}
		str[i++] = '\n';
		str[i] = '\0';
	}
}

void	create_strtest00(char *str, int y, int x)
{
	int i;

	i = 1;
	if (y >= 1)
		ft_top_line00(str, x);
	if (y >= 3)
	{
		while (i <= (y - 2))
		{
			ft_mid_line00(str, x);
			i++;
		}
	}
	if (y >= 2)
		ft_bot_line00(str, x);
}

int		check_colle00(char *input, int len, int y, int x)
{
	char *strtest;

	strtest = (char*)malloc(sizeof(char) * (len + 1));
	create_strtest00(strtest, y, x);
	if (ft_strcmp(input, strtest) == 0)
	{
		free(strtest);
		return (1);
	}
	free(strtest);
	return (0);
}
