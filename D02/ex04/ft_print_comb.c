/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:28:47 by bclaudio          #+#    #+#             */
/*   Updated: 2018/08/30 21:31:50 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_results(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (!(a == 7 && b == 8 && c == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0 - 1;
	while (a <= 9)
	{
		a++;
		b = a;
		while (b < 9)
		{
			b++;
			c = b;
			while (c < 9)
			{
				c++;
				display_results(a, b, c);
			}
		}
	}
}
