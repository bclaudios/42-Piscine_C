/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_in_square.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:20:17 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:37:10 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error_line_in_square(char **grid, int y, int x, int initx)
{
	int i;
	int j;
	int inity;

	if (y >= 1 && y <= 3)
		inity = 1;
	if (y >= 4 && y <= 6)
		inity = 4;
	if (y >= 7 && y <= 9)
		inity = 7;
	j = inity;
	while (j <= inity + 2)
	{
		i = initx;
		while (i <= initx + 2)
		{
			if (grid[y][x] == grid[j][i] && x != i && grid[y][x] != '.')
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int		error_square(char **grid, int y, int x)
{
	int inity;
	int initx;

	initx = x;
	inity = y;
	while (y <= inity + 2)
	{
		x = initx;
		while (x <= initx + 2)
		{
			if (error_line_in_square(grid, y, x, initx))
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}

int		error_in_any_square(char **grid)
{
	if (error_square(grid, 1, 0))
		return (1);
	if (error_square(grid, 1, 3))
		return (1);
	if (error_square(grid, 1, 6))
		return (1);
	if (error_square(grid, 4, 0))
		return (1);
	if (error_square(grid, 4, 3))
		return (1);
	if (error_square(grid, 4, 6))
		return (1);
	if (error_square(grid, 7, 0))
		return (1);
	if (error_square(grid, 7, 3))
		return (1);
	if (error_square(grid, 7, 6))
		return (1);
	return (0);
}
