/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:48:12 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:37:48 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(char **grid)
{
	int y;
	int x;

	y = 1;
	x = 0;
	while (y < 10)
	{
		while (x < 9)
		{
			if (grid[y][x] == '.')
				ft_putchar('0');
			else
				ft_putchar(grid[y][x]);
			if (x != 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}
