/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:54:04 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/06 20:44:20 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[argc - argc][i])
	{
		ft_putchar(argv[argc - argc][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
