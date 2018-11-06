/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:44:05 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/06 18:57:59 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	j = 1;
	if (argc >= 2)
	{
		while (j != argc)
		{
			i = 0;
			while (argv[argc - j][i])
			{
				ft_putchar(argv[argc - j][i]);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
	return (0);
}
