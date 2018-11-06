/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colle03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:32:36 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/16 17:51:22 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"

void	ft_top_line03(char *str, int x)
{
	int i;

	i = 0;
	if (x >= 1)
	{
		str[i++] = 'A';
		if (x >= 3)
		{
			while (i < x - 1)
				str[i++] = 'B';
		}
		if (x >= 2)
			str[i++] = 'C';
		str[i++] = '\n';
		str[i] = '\0';
	}
}

void	ft_mid_line03(char *str, int x)
{
	int i;
	int linelen;

	linelen = 0;
	i = ft_strlen(str);
	if (x >= 1)
	{
		str[i++] = 'B';
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
			str[i++] = 'B';
		str[i++] = '\n';
	}
	str[i] = '\0';
}

void	ft_bot_line03(char *str, int x)
{
	int i;
	int linelen;

	linelen = 0;
	i = ft_strlen(str);
	if (x >= 1)
	{
		str[i++] = 'A';
		linelen++;
		if (x >= 3)
		{
			while (linelen < x - 1)
			{
				str[i++] = 'B';
				linelen++;
			}
		}
		if (x >= 2)
		{
			str[i++] = 'C';
		}
		str[i++] = '\n';
		str[i] = '\0';
	}
}

void	create_strtest03(char *str, int y, int x)
{
	int i;

	i = 1;
	if (y >= 1)
		ft_top_line03(str, x);
	if (y >= 3)
	{
		while (i <= (y - 2))
		{
			ft_mid_line03(str, x);
			i++;
		}
	}
	if (y >= 2)
		ft_bot_line03(str, x);
}

int		check_colle03(char *input, int len, int y, int x)
{
	char *strtest;

	strtest = (char*)malloc(sizeof(char) * (len + 1));
	create_strtest03(strtest, y, x);
	if (ft_strcmp(input, strtest) == 0)
	{
		free(strtest);
		return (1);
	}
	free(strtest);
	return (0);
}
