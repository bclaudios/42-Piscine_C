/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:07:38 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:37:24 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error_in_any_square(char **grid);

int		error_line(char **grid)
{
	int y;
	int x;
	int i;

	y = 1;
	while (y <= 9)
	{
		x = 0;
		while (x <= 8)
		{
			i = 0;
			while (i <= 8)
			{
				if (grid[y][x] == grid[y][i] && x != i && grid[y][x] != '.')
					return (1);
				i++;
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		error_column(char **grid)
{
	int y;
	int x;
	int i;

	x = 0;
	while (x <= 8)
	{
		y = 1;
		while (y <= 9)
		{
			i = 1;
			while (i <= 9)
			{
				if (grid[y][x] == grid[i][x] && y != i && grid[y][x] != '.')
					return (1);
				i++;
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		double_value_error(char **grid)
{
	if (error_line(grid))
		return (1);
	if (error_column(grid))
		return (1);
	if (error_in_any_square(grid))
		return (1);
	return (0);
}
