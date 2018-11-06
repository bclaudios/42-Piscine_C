/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:06:38 by scoron            #+#    #+#             */
/*   Updated: 2018/09/16 19:29:38 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"

int		main(void)
{
	char	*str_colle;
	int		col;
	int		line;

	str_colle = ft_read();
	if (str_colle == 0)
		return (0);
	col = ft_check_col(str_colle);
	line = ft_check_line(str_colle);
	ft_print(str_colle, line, col);
	return (0);
}
