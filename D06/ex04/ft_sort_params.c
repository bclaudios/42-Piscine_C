/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:58:00 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/06 18:59:51 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_params(int argc, char *argv[])
{
	int i;
	int j;

	j = 1;
	if (argc >= 2)
	{
		while (j != argc)
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 2;
	if (argc >= 2)
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				tmp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = tmp;
				i = 1;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
