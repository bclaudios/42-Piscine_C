/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:12:08 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:38:20 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	replace_yx(int y, int x, int *new_y, int *new_x)
{
	if (1 <= y && y <= 3)
		*new_y = 1;
	else if (4 <= y && y <= 6)
		*new_y = 4;
	else if (7 <= y && y <= 9)
		*new_y = 7;
	if (0 <= x && x <= 2)
		*new_x = 0;
	else if (3 <= x && x <= 5)
		*new_x = 3;
	else if (6 <= x && x <= 8)
		*new_x = 6;
}

int		square_ok(char **grid, int y, int x, int value)
{
	int new_y;
	int new_x;
	int tmp_x;
	int tmp_y;

	new_x = 0;
	new_y = 0;
	replace_yx(y, x, &new_y, &new_x);
	tmp_x = new_x;
	tmp_y = new_y;
	while (new_y <= tmp_y + 2)
	{
		while (new_x <= tmp_x + 2)
		{
			if (grid[new_y][new_x] == value + '0')
				return (0);
			new_x++;
		}
		new_x = tmp_x;
		new_y++;
	}
	return (1);
}

int		line_ok(char **grid, int y, int value)
{
	int i;

	i = 0;
	while (i <= 8)
	{
		if (grid[y][i] == value + '0')
			return (0);
		i++;
	}
	return (1);
}

int		column_ok(char **grid, int x, int value)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		if (grid[i][x] == value + '0')
			return (0);
		i++;
	}
	return (1);
}

int		value_checker(char **grid, int y, int x, int value)
{
	if (square_ok(grid, y, x, value)
			&& line_ok(grid, y, value)
			&& column_ok(grid, x, value))
		return (1);
	return (0);
}
