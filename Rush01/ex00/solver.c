/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:48:16 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:38:07 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		value_checker(char **grid, int y, int x, int value);

int		end_of_grid(int y)
{
	if (y > 9)
	{
		return (1);
	}
	return (0);
}

void	incremented_yx_value(int *y, int *x, int *new_y, int *new_x)
{
	*new_x = *x;
	*new_y = *y;
	if (*new_x == 8)
	{
		*new_x = 0;
		*new_y = *new_y + 1;
	}
	else
		*new_x = *new_x + 1;
}

int		filled_case(char **grid, int y, int x)
{
	if (grid[y][x] != '.')
		return (1);
	return (0);
}

int		record_solution(int *solution)
{
	*solution = *solution + 1;
	if (*solution == 1)
		return (0);
	else
		return (1);
}

int		solve_grid(char **grid, int y, int x, int *solution)
{
	int value;
	int new_y;
	int new_x;

	value = 1;
	if (end_of_grid(y))
		return (record_solution(solution));
	if (filled_case(grid, y, x))
	{
		incremented_yx_value(&y, &x, &new_y, &new_x);
		return (solve_grid(grid, new_y, new_x, solution));
	}
	while (value <= 9)
	{
		if (value_checker(grid, y, x, value))
		{
			grid[y][x] = value + '0';
			incremented_yx_value(&y, &x, &new_y, &new_x);
			if (solve_grid(grid, new_y, new_x, solution))
				return (1);
		}
		value++;
	}
	grid[y][x] = '.';
	return (0);
}
