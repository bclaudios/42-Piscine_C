/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:17:00 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/02 16:11:07 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int t;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			t = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = t;
			i = 0;
		}
		i++;
	}
}
