/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpucherc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:01:05 by qpucherc          #+#    #+#             */
/*   Updated: 2018/09/02 18:01:12 by qpucherc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, char beg, char mid, char end)
{
	int i;

	if (x >= 1)
	{
		ft_putchar(beg);
		if (x >= 3)
		{
			i = 1;
			while (i <= (x - 2))
			{
				ft_putchar(mid);
				i++;
			}
		}
		if (x >= 2)
		{
			ft_putchar(end);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int i;

	if (y >= 1)
	{
		ft_line(x, 'o', '-', 'o');
	}
	if (y >= 3)
	{
		i = 1;
		while (i <= (y - 2))
		{
			ft_line(x, '|', ' ', '|');
			i++;
		}
	}
	if (y >= 2)
	{
		ft_line(x, 'o', '-', 'o');
	}
}
