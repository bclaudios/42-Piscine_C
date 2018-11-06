/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:48:02 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/09 20:37:38 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve_grid(char **grid, int y, int x, int *solution);
int		check_grid_error(char **grid, int argc);
void	print_grid(char **grid);
int		end_of_grid(int y);
void	incremented_yx_value(int *y, int *x, int *new_y, int *new_x);
int		filled_case(char **grid, int y, int x);
int		value_checker(char **grid, int y, int x, int value);

int		last_solved_grid(char **grid, int y, int x)
{
	int value;
	int new_y;
	int new_x;

	value = 1;
	if (end_of_grid(y))
		return (1);
	if (filled_case(grid, y, x))
	{
		incremented_yx_value(&y, &x, &new_y, &new_x);
		return (last_solved_grid(grid, new_y, new_x));
	}
	while (value <= 9)
	{
		if (value_checker(grid, y, x, value))
		{
			grid[y][x] = value + '0';
			incremented_yx_value(&y, &x, &new_y, &new_x);
			if (last_solved_grid(grid, new_y, new_x))
				return (1);
		}
		value++;
	}
	grid[y][x] = '.';
	return (0);
}

int		main(int argc, char *argv[])
{
	int solution;

	solution = 0;
	if (check_grid_error(argv, argc))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!solve_grid(argv, 1, 0, &solution) && solution == 1)
	{
		last_solved_grid(argv, 1, 0);
		print_grid(argv);
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
