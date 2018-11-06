/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:47:54 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:37:33 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		double_value_error(char **grid);

int		check_given_char(char **grid)
{
	int y;
	int x;

	y = 1;
	x = 0;
	while (y <= 9)
	{
		while (x <= 8)
		{
			if (!(grid[y][x] == '.'
						|| (grid[y][x] >= '1' && grid[y][x] <= '9')))
				return (1);
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}

int		check_argc(int argc)
{
	if (argc != 10)
		return (1);
	return (0);
}

int		check_arg_size(char **grid)
{
	int y;
	int x;

	y = 1;
	x = 0;
	while (y <= 9)
	{
		while (grid[y][x])
		{
			x++;
		}
		if (x != 9)
			return (1);
		x = 0;
		y++;
	}
	return (0);
}

int		check_grid_error(char **grid, int argc)
{
	if (check_argc(argc))
		return (1);
	if (check_given_char(grid))
		return (1);
	if (check_arg_size(grid))
		return (1);
	if (double_value_error(grid))
		return (1);
	return (0);
}
