/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:20:36 by scoron            #+#    #+#             */
/*   Updated: 2018/09/16 19:41:53 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"

int		ft_check_col(char *str)
{
	int tot;
	int line;
	int col;

	line = 0;
	tot = 0;
	while (str[tot])
	{
		if (str[tot] == '\n')
			line += 1;
		tot++;
	}
	col = tot / line;
	return (col - 1);
}

int		ft_check_line(char *str)
{
	int tot;
	int line;

	tot = 0;
	line = 0;
	while (str[tot])
	{
		if (str[tot] == '\n')
			line += 1;
		tot++;
	}
	return (line);
}
